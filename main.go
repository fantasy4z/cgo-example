package main

// #cgo LDFLAGS: -L./cfoobar -lcfoobar -L./cppfoobar -lcppfoobar
// #include <stdlib.h>
// #include "cfoobar/cfoobar.h"
// #include "cppfoobar/cppfoobar_wrapper.h"
import "C"

import (
	"fmt"
	"time"
	"unsafe"
)

const (
	aMagicNumberInTaiwan = 5566
)

func main() {
	fmt.Println("Trying C srand and random...")
	cSeed()
	fmt.Println(cRandom())

	fmt.Println("Trying C non-std implementation...")
	callCHelloWorld()

	fmt.Println("Trying C wrapper functions for a C++ class...")
	callCPPWrapper()
}

func cSeed() {
	C.srandom(C.uint(time.Now().Unix()))
}

func cRandom() int {
	return int(C.random())
}

func callCHelloWorld() {
	strPtr := C.print_and_get_hello_world()
	fmt.Println("Got string from C:", C.GoString(strPtr))
}

func callCPPWrapper() {
	type Foobar struct {
		ptr unsafe.Pointer
	}

	foobar := C.new_foobar(C.int(aMagicNumberInTaiwan))
	defer C.delete_foobar(foobar)
	fmt.Println("Get value from the C class:", int(C.foobar_value(foobar)))
}

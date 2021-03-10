#pragma once
#ifdef __cplusplus
extern "C" {
#endif

void* new_foobar(int value);
void delete_foobar(void* foobar);
int foobar_value(void* foobar);

#ifdef __cplusplus
}  // extern "C"
#endif

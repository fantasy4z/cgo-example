#pragma once

class Foobar {
public:
    Foobar(int value);
    ~Foobar();
    int value() const;

private:
    int m_value;
};

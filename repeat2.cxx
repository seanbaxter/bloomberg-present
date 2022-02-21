#include <iostream>
#include <vector>

template<template auto... Args>
struct arg_list_t;

// Create an argument list with X repeated N times.
template<template auto X, int N>
using repeat_list = arg_list_t<for i : N => X>;

// Make a list of 5 SHRT_MAX.
@meta puts(repeat_list<SHRT_MAX, 5>.string);

// Make list of 3 longs.
@meta puts(repeat_list<long, 3>.string);

// Make list of 4 std::vector templates.
@meta puts(repeat_list<std::vector, 4>.string);

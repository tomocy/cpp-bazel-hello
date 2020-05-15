load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
    name = "hello",
    srcs = ["hello.cc"],
    hdrs = ["hello.h"],
)

cc_binary(
    name = "main",
    srcs = ["main.cc"],
    deps = [
        ":hello",
        "//time",
    ],
)

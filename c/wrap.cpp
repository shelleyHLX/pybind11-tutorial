<%
cfg['compiler_args'] = ['-std=c++11',]
cfg['sources'] = ['funcs.cpp']
setup_pybind11(cfg)
%>

#include "funcs.hpp"
#include <pybind11/pybind11.h>

namespace py = pybind11;

PYBIND11_PLUGIN(wrap) {
    py::module m("wrap", "pybind11 example plugin");
    m.def("add", &add, "A function which adds two numbers");
    return m.ptr();
}

#include "example.h"
#include "multimodule.h"

PYBIND11_PLUGIN(multimoduleA) {
  py::module m("multimoduleA", "multimoduleA");
  py::class_<TestClass>(m, "TestClass");
  return m.ptr();
}

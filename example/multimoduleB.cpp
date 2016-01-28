#include "example.h"
#include "multimodule.h"
TestClass test()
{
  return TestClass();
}


PYBIND11_PLUGIN(multimoduleB) {
  py::module m("multimoduleB", "multimoduleB");
  m.def("test", &test);
  return m.ptr();
}

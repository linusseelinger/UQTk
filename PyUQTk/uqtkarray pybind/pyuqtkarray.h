#include <pybind11/pybind11.h>
#include <>

PYBIND11_MODULE(uqtkarray, m) {
    py::class_<Array1D<int>>(m, "Array1D<int>")
      .def(py::init<>())
      .def(py::init<const int&>())
      .def(py::init<const int&,const int&>())
      .def("Assign", &Array1D::operator=)
      .def(py::init<const Array1D &>())
      .def("Clear",&Array1D::Clear)
      .def("XSize",&Array1D::XSize)
      .def("Length",&Array1D::Length)
      .def("Resize",static_cast<void (Array1D::*)(const int&)>(&Array1D::Resize))
      .def("Resize",static_cast<void (Array1D::*)(const int&,const int&)>(&Array1D::Resize))
      .def("SetValue",&Array1D::SetValue)
      .def("PushBack",&Array1D::PushBack)
      .def("GetArrayPointer",&Array1D::GetArrayPointer)
      .def("GetConstArrayPointer",&Array1D::GetConstArrayPointer)
      .def("element",&Array1D::operator())
      .def("insert",static_cast<void (Array1D::*)(Array1D<int>&,int)>(&Array1D::insert))
      .def("insert",static_cast<void (Array1D::*)(const int&,int)>(&Array1D::insert))
      .def("erase",&Array1D::erase)
      .def("DumpBinary",static_cast<void (Array1D::*)(FILE*)>(&Array1D::DumpBinary)))
      .def("DumpBinary",static_cast<void (Array1D::*)(char*)>(&Array1D::DumpBinary)))
      .def("ReadBinary",static_cast<void (Array1D::*)(FILE*)>(&Array1D::ReadBinary)))
      .def("ReadBinary",static_cast<void (Array1D::*)(char*)>(&Array1D::ReadBinary)))
      .def("pyElement",&Array1D::operator[])
      .def("ReadBinary4py",&Array1D::ReadBinary4py)
      .def("DumpBinary4py",&Array1D::DumpBinary4py)
      .def("setArray",&Array1D::setArray)
      .def("setnpintArray",&Array1D::setnpintArray)
      .def("getnpintArray",&Array1D::getnpintArray)
      .def("flatten",&Array1D::flatten)
      .def("type",&Array1D::type)

      py::class_<Array1D<double>>(m, "Array1D<double>")
        .def(py::init<>())
        .def(py::init<const int&>())
        .def(py::init<const int&,const int&>())
        .def("Assign", &Array1D::operator=)
        .def(py::init<const Array1D &>())
        .def("Clear",&Array1D::Clear)
        .def("XSize",&Array1D::XSize)
        .def("Length",&Array1D::Length)
        .def("Resize",static_cast<void (Array1D::*)(const int&)>(&Array1D::Resize))
        .def("Resize",static_cast<void (Array1D::*)(const int&,const double&)>(&Array1D::Resize))
        .def("SetValue",&Array1D::SetValue)
        .def("PushBack",&Array1D::PushBack)
        .def("GetArrayPointer",&Array1D::GetArrayPointer)
        .def("GetConstArrayPointer",&Array1D::GetConstArrayPointer)
        .def("element",&Array1D::operator())
        .def("insert",static_cast<void (Array1D::*)(Array1D<double>&,int)>(&Array1D::insert))
        .def("insert",static_cast<void (Array1D::*)(const double&,int)>(&Array1D::insert))
        .def("erase",&Array1D::erase)
        .def("DumpBinary",static_cast<void (Array1D::*)(FILE*)>(&Array1D::DumpBinary)))
        .def("DumpBinary",static_cast<void (Array1D::*)(char*)>(&Array1D::DumpBinary)))
        .def("ReadBinary",static_cast<void (Array1D::*)(FILE*)>(&Array1D::ReadBinary)))
        .def("ReadBinary",static_cast<void (Array1D::*)(char*)>(&Array1D::ReadBinary)))
        .def("pyElement",&Array1D::operator[])
        .def("ReadBinary4py",&Array1D::ReadBinary4py)
        .def("DumpBinary4py",&Array1D::DumpBinary4py)
        .def("setArray",&Array1D::setArray)
        .def("setnpdblArray",&Array1D::setnpintArray)
        .def("getnpdblArray",&Array1D::getnpintArray)
        .def("flatten",&Array1D::flatten)
        .def("type",&Array1D::type)

      py::class_<Array2D<int>>(m,"Array2D")
        .def(py::init<>())
        .def(py::init<const int&,const int&>())
        .def(py::init<const int&,const int&>,const int&())
        .def(py::init<const Array2D &>())
        .def("Clear",&Array2D::Clear)
        .def("XSize",&Array2D::XSize)
        .def("YSize",&Array2D::YSize)
        .def("Resize",static_cast<void (Array2D::*)(const int&,const int&)>(&Array2D::Resize))
        .def("Resize",static_cast<void (Array2D::*)(const int&,const int&,const int&)>(&Array2D::Resize))
        .def("SetValue",&Array2D::SetValue)
        .def("GetArrayPointer",&Array2D::GetArrayPointer)
        .def("GetConstArrayPointer",&Array2D::GetConstArrayPointer)
        .def("element",&Array2D::operator())
        .def("insertRow",static_cast<void (Array2D::*)(Array1D<int>&,int)>(&Array2D::insertRow))
        .def("insertRow",static_cast<void (Array2D::*)(Array2D<int>&,int)>(&Array2D::insertRow))
        .def("eraseRow",&Array2D::eraseRow)
        .def("insertCol",static_cast<void (Array2D::*)(Array1D<int>&,int)>(&Array2D::insertCol))
        .def("insertCol",static_cast<void (Array2D::*)(Array2D<int>&,int)>(&Array2D::insertCol))
        .def("eraseCol",&Array2D::eraseCol)
        .def("DumpBinary",static_cast<void (Array2D::*)(FILE*)>(&Array2D::DumpBinary)))
        .def("DumpBinary",static_cast<void (Array2D::*)(char*)>(&Array2D::DumpBinary)))
        .def("ReadBinary",static_cast<void (Array2D::*)(FILE*)>(&Array2D::ReadBinary)))
        .def("ReadBinary",static_cast<void (Array2D::*)(char*)>(&Array2D::ReadBinary)))
        .def("pyElement",&Array1D::operator[])
        .def("getRow",&Array1D::getRow)
        .def("ReadBinary4py",&Array2D::ReadBinary4py)
        .def("DumpBinary4py",&Array2D::DumpBinary4py)
        .def("setArray",&Array2D::setArray)
        .def("flatten",&Array2D::flatten)
        .def("type",&Array2D::type)
        .def("setnpintArray",&Array2D::setnpintArray)
        .def("getnpintArray",&Array2D::getnpintArray)
        .def("setnpdblArray",&Array2D::setnpdblArray)
        .def("getnpdblArray",&Array2D::getnpdblArray)

      py::class_<Array2D<double>>(m,"Array2D")
        .def(py::init<>())
        .def(py::init<const int&,const int&>())
        .def(py::init<const int&,const int&>,const int&())
        .def(py::init<const Array2D &>())
        .def("Clear",&Array2D::Clear)
        .def("XSize",&Array2D::XSize)
        .def("YSize",&Array2D::YSize)
        .def("Resize",static_cast<void (Array2D::*)(const int&,const int&)>(&Array2D::Resize))
        .def("Resize",static_cast<void (Array2D::*)(const int&,const int&,const double&)>(&Array2D::Resize))
        .def("SetValue",&Array2D::SetValue)
        .def("GetArrayPointer",&Array2D::GetArrayPointer)
        .def("GetConstArrayPointer",&Array2D::GetConstArrayPointer)
        .def("element",&Array2D::operator())
        .def("insertRow",static_cast<void (Array2D::*)(Array1D<double>&,int)>(&Array2D::insertRow))
        .def("insertRow",static_cast<void (Array2D::*)(Array2D<double>&,int)>(&Array2D::insertRow))
        .def("eraseRow",&Array2D::eraseRow)
        .def("insertCol",static_cast<void (Array2D::*)(Array1D<double>&,int)>(&Array2D::insertCol))
        .def("insertCol",static_cast<void (Array2D::*)(Array2D<double>&,int)>(&Array2D::insertCol))
        .def("eraseCol",&Array2D::eraseCol)
        .def("DumpBinary",static_cast<void (Array2D::*)(FILE*)>(&Array2D::DumpBinary)))
        .def("DumpBinary",static_cast<void (Array2D::*)(char*)>(&Array2D::DumpBinary)))
        .def("ReadBinary",static_cast<void (Array2D::*)(FILE*)>(&Array2D::ReadBinary)))
        .def("ReadBinary",static_cast<void (Array2D::*)(char*)>(&Array2D::ReadBinary)))
        .def("pyElement",&Array1D::operator[])
        .def("getRow",&Array1D::getRow)
        .def("ReadBinary4py",&Array2D::ReadBinary4py)
        .def("DumpBinary4py",&Array2D::DumpBinary4py)
        .def("setArray",&Array2D::setArray)
        .def("flatten",&Array2D::flatten)
        .def("type",&Array2D::type)
        .def("setnpintArray",&Array2D::setnpintArray)
        .def("getnpintArray",&Array2D::getnpintArray)
        .def("setnpdblArray",&Array2D::setnpdblArray)
        .def("getnpdblArray",&Array2D::getnpdblArray)
}

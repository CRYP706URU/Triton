//! \file
/*
**  Copyright (C) - Triton
**
**  This program is under the terms of the BSD License.
*/

#include <triton/pythonBindings.hpp>
#include <triton/astEnums.hpp>



/*! \page py_AST_REPRESENTATION_page AST_REPRESENTATION
    \brief [**python api**] All information about the AST_REPRESENTATION python namespace.

\tableofcontents

\section AST_REPRESENTATION_py_description Description
<hr>

The AST_REPRESENTATION namespace contains all kinds of AST representation.

\subsection AST_REPRESENTATION_py_example Example

~~~~~~~~~~~~~{.py}
>>> setAstRepresentationMode(AST_REPRESENTATION.PYTHON)
~~~~~~~~~~~~~

\section AST_REPRESENTATION_py_api Python API - Items of the AST_REPRESENTATION namespace
<hr>

- **AST_REPRESENTATION.SMT**<br>
Enabled, all prints of AST expressions will be represented into the SMT2-Lib syntax. This is the default mode.

- **AST_REPRESENTATION.PYTHON**<br>
Enabled, all prints of AST expressions will be represented into the Python syntax.


*/



namespace triton {
  namespace bindings {
    namespace python {

      void initAstRepresentationEnum(pybind11::module& pyTriton) {
        /* AST_REPRESENTATION Enum */
        pybind11::enum_<triton::ast::representations::mode_e>(pyTriton, "AST_REPRESENTATION")
          .value("SMT",    triton::ast::representations::SMT_REPRESENTATION)
          .value("PYTHON", triton::ast::representations::PYTHON_REPRESENTATION);
      }

    }; /* python namespace */
  }; /* bindings namespace */
}; /* triton namespace */

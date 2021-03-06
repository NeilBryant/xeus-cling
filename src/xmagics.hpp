/***************************************************************************
* Copyright (c) 2016, Johan Mabille, Loic Gouarin and Sylvain Corlay       *
*                                                                          *
* Distributed under the terms of the BSD 3-Clause License.                 *
*                                                                          *
* The full license is in the file LICENSE, distributed with this software. *
****************************************************************************/

#ifndef XCPP_MAGICS_HPP
#define XCPP_MAGICS_HPP

#include <map>
#include <memory>

#include "xoptions.hpp"
#include "xpreamble.hpp"

namespace xeus
{
    enum struct xmagic_type
    {
        cell,
        line
    };

    struct xmagic_line
    {
        virtual void operator()(const std::string& line) = 0;
    };

    struct xmagic_cell
    {
        virtual void operator()(const std::string& line, const std::string& cell) = 0;
    };

    struct xmagic_line_cell : public xmagic_line, xmagic_cell
    {
    };
}
#endif

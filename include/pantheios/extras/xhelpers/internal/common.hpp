/* /////////////////////////////////////////////////////////////////////////
 * File:    pantheios/extras/xhelpers/internal/common.hpp
 *
 * Purpose: Definition of common features header for the
 *          Pantheios.Extras.xHelpers library for C++ compilation.
 *
 * Created: 30th January 2011
 * Updated: 26th October 2024
 *
 * Home:    http://www.pantheios.org/
 *
 * Copyright (c) 2019-2024, Matthew Wilson and Synesis Information Systems
 * Copyright (c) 2011-2019, Matthew Wilson and Synesis Software
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 * - Redistributions of source code must retain the above copyright notice,
 *   this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the distribution.
 * - Neither the name(s) of Matthew Wilson and Synesis Software nor the
 *   names of any contributors may be used to endorse or promote products
 *   derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
 * IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * ////////////////////////////////////////////////////////////////////// */


/** \file pantheios/extras/xhelpers/internal/common.hpp
 * [C++] Definition of common features header for the
 *   \ref group__library__pantheios_extras_xhelpers "Pantheios.Extras.xHelpers" library.
 */

#ifndef PANTHEIOS_EXTRAS_XHELPERS_INCL_PANTHEIOS_EXTRAS_XHELPERS_INTERNAL_HPP_COMMON
#define PANTHEIOS_EXTRAS_XHELPERS_INCL_PANTHEIOS_EXTRAS_XHELPERS_INTERNAL_HPP_COMMON


/* /////////////////////////////////////////////////////////////////////////
 * version information
 */

#ifndef PANTHEIOS_DOCUMENTATION_SKIP_SECTION
# define PANTHEIOS_XHELPERS_EXTRAS_VER_PANTHEIOS_EXTRAS_XHELPERS_INTERNAL_HPP_COMMON_MAJOR      1
# define PANTHEIOS_XHELPERS_EXTRAS_VER_PANTHEIOS_EXTRAS_XHELPERS_INTERNAL_HPP_COMMON_MINOR      0
# define PANTHEIOS_XHELPERS_EXTRAS_VER_PANTHEIOS_EXTRAS_XHELPERS_INTERNAL_HPP_COMMON_REVISION   2
# define PANTHEIOS_XHELPERS_EXTRAS_VER_PANTHEIOS_EXTRAS_XHELPERS_INTERNAL_HPP_COMMON_EDIT       3
#endif /* !PANTHEIOS_DOCUMENTATION_SKIP_SECTION */


/* /////////////////////////////////////////////////////////////////////////
 * includes
 */

#include <pantheios/extras/xhelpers/internal/common.h>


/* /////////////////////////////////////////////////////////////////////////
 * compatibility checks
 */

#if 0
#elif defined(PANTHEIOS_NO_NAMESPACE)
# error Pantheios.Extras.xHelpers library does not (currently) support no-namespace operation
#endif /* !PANTHEIOS_NO_NAMESPACE */


/* /////////////////////////////////////////////////////////////////////////
 * namespace
 */

/** The <strong>Pantheios</strong> root namespace - <code>pantheios</code>.
 *
 * This namespace is used by the Pantheios main library.
 * <strong>Pantheios.Extras.xHelpers</strong> elements are defined within
 * the <code>pantheios::extras::xhelpers</code> namespace.
 */
namespace pantheios
{
/** The <strong>Pantheios::Extras</strong> root namespace - <code>pantheios::extras</code>.
 *
 * This namespace is used to contain all Pantheios::Extras projects.
 * <strong>Pantheios.Extras.xHelpers</strong> elements are defined within
 * the <code>pantheios::extras::xhelpers</code> namespace.
 */
namespace extras
{
/** The namespace used by the <strong>Pantheios.Extras.xHelpers</strong>
 * library - <code>pantheios::extras::xhelpers</code>.
 */
namespace xhelpers
{

} // namespace xhelpers
} // namespace extras
} // namespace pantheios


/* /////////////////////////////////////////////////////////////////////////
 * inclusion
 */

#ifdef STLSOFT_CF_PRAGMA_ONCE_SUPPORT
# pragma once
#endif /* STLSOFT_CF_PRAGMA_ONCE_SUPPORT */

#endif /* !PANTHEIOS_EXTRAS_XHELPERS_INCL_PANTHEIOS_EXTRAS_XHELPERS_INTERNAL_HPP_COMMON */

/* ///////////////////////////// end of file //////////////////////////// */


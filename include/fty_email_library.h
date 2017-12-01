/*  =========================================================================
    fty-email - generated layer of public API

    Copyright (C) 2014 - 2017 Eaton

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
    =========================================================================
*/

#ifndef FTY_EMAIL_LIBRARY_H_INCLUDED
#define FTY_EMAIL_LIBRARY_H_INCLUDED

//  Set up environment for the application

//  External dependencies
#include <czmq.h>
#include <malamute.h>
#include <ftyproto.h>
#include <magic.h>
#include <cxxtools/allocator.h>

//  FTY_EMAIL version macros for compile-time API detection
#define FTY_EMAIL_VERSION_MAJOR 1
#define FTY_EMAIL_VERSION_MINOR 0
#define FTY_EMAIL_VERSION_PATCH 0

#define FTY_EMAIL_MAKE_VERSION(major, minor, patch) \
    ((major) * 10000 + (minor) * 100 + (patch))
#define FTY_EMAIL_VERSION \
    FTY_EMAIL_MAKE_VERSION(FTY_EMAIL_VERSION_MAJOR, FTY_EMAIL_VERSION_MINOR, FTY_EMAIL_VERSION_PATCH)

#if defined (__WINDOWS__)
#   if defined FTY_EMAIL_STATIC
#       define FTY_EMAIL_EXPORT
#   elif defined FTY_EMAIL_INTERNAL_BUILD
#       if defined DLL_EXPORT
#           define FTY_EMAIL_EXPORT __declspec(dllexport)
#       else
#           define FTY_EMAIL_EXPORT
#       endif
#   elif defined FTY_EMAIL_EXPORTS
#       define FTY_EMAIL_EXPORT __declspec(dllexport)
#   else
#       define FTY_EMAIL_EXPORT __declspec(dllimport)
#   endif
#   define FTY_EMAIL_PRIVATE
#elif defined (__CYGWIN__)
#   define FTY_EMAIL_EXPORT
#   define FTY_EMAIL_PRIVATE
#else
#   define FTY_EMAIL_EXPORT
#   if (defined __GNUC__ && __GNUC__ >= 4) || defined __INTEL_COMPILER
#       define FTY_EMAIL_PRIVATE __attribute__ ((visibility ("hidden")))
#   else
#       define FTY_EMAIL_PRIVATE
#   endif
#endif

//  Opaque class structures to allow forward references
//  These classes are stable or legacy and built in all releases
typedef struct _fty_email_server_t fty_email_server_t;
#define FTY_EMAIL_SERVER_T_DEFINED


//  Public classes, each with its own header file
#include "fty_email_server.h"

#ifdef FTY_EMAIL_BUILD_DRAFT_API
//  Self test for private classes
FTY_EMAIL_EXPORT void
    fty_email_private_selftest (bool verbose);
#endif // FTY_EMAIL_BUILD_DRAFT_API

#endif
/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
*/

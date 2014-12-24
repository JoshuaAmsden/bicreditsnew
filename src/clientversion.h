// Copyright (c) 2009-2014 The Bitcredits developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef CLIENTVERSION_H
#define CLIENTVERSION_H

#if defined(HAVE_CONFIG_H)
#include "config/bitcredits-config.h"
#else
//
// client versioning and copyright year
//

// These need to be macros, as version.cpp's and bitcredits*-res.rc's voodoo requires it
#define CLIENT_VERSION_MAJOR 0
#define CLIENT_VERSION_MINOR 1
#define CLIENT_VERSION_REVISION 04
#define CLIENT_VERSION_BUILD 1

// Set to true for release, false for prerelease or test build
#define CLIENT_VERSION_IS_RELEASE true

// Copyright year (2009-this)
// Todo: update this when changing our copyright comments in the source
#define COPYRIGHT_YEAR 2014

#endif //HAVE_CONFIG_H

// Converts the parameter X to a string after macro replacement on X has been performed.
// Don't merge these into one macro!
#define STRINGIZE(X) DO_STRINGIZE(X)
#define DO_STRINGIZE(X) #X

// Copyright string used in Windows .rc files
#define COPYRIGHT_STR "2014-" STRINGIZE(COPYRIGHT_YEAR) " The Bitcredits Core Developers"

#endif // CLIENTVERSION_H
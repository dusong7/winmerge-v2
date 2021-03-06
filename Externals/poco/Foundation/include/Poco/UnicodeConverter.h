//
// UnicodeConverter.h
//
// $Id: //poco/1.4/Foundation/include/Poco/UnicodeConverter.h#1 $
//
// Library: Foundation
// Package: Text
// Module:  UnicodeConverter
//
// Definition of the UnicodeConverter class.
//
// Copyright (c) 2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// Permission is hereby granted, free of charge, to any person or organization
// obtaining a copy of the software and accompanying documentation covered by
// this license (the "Software") to use, reproduce, display, distribute,
// execute, and transmit the Software, and to prepare derivative works of the
// Software, and to permit third-parties to whom the Software is furnished to
// do so, all subject to the following:
// 
// The copyright notices in the Software and this entire statement, including
// the above license grant, this restriction and the following disclaimer,
// must be included in all copies of the Software, in whole or in part, and
// all derivative works of the Software, unless such copies or derivative
// works are solely in the form of machine-executable object code generated by
// a source language processor.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
// SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
// FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.
//


#ifndef Foundation_UnicodeConverter_INCLUDED
#define Foundation_UnicodeConverter_INCLUDED


#include "Poco/Foundation.h"


namespace Poco {


class Foundation_API UnicodeConverter
	/// A convenience class that converts strings from
	/// UTF-8 encoded std::strings to UTF-16 encoded std::wstrings 
	/// and vice-versa.
	///
	/// This class is mainly used for working with the Unicode Windows APIs
	/// and probably won't be of much use anywhere else.
{
public:
	static void toUTF16(const std::string& utf8String, std::wstring& utf16String);
		/// Converts the given UTF-8 encoded string into an UTF-16 encoded wstring.

	static void toUTF16(const char* utf8String, size_t length, std::wstring& utf16String);	
		/// Converts the given UTF-8 encoded character sequence into an UTF-16 encoded string.

	static void toUTF16(const char* utf8String, std::wstring& utf16String);	
		/// Converts the given zero-terminated UTF-8 encoded character sequence into an UTF-16 encoded wstring.

	static void toUTF8(const std::wstring& utf16String, std::string& utf8String);
		/// Converts the given UTF-16 encoded wstring into an UTF-8 encoded string.

	static void toUTF8(const wchar_t* utf16String, size_t length, std::string& utf8String);
		/// Converts the given zero-terminated UTF-16 encoded wide character sequence into an UTF-8 encoded wstring.

	static void toUTF8(const wchar_t* utf16String, std::string& utf8String);
		/// Converts the given UTF-16 encoded zero terminated character sequence into an UTF-8 encoded string.
};


} // namespace Poco


#endif // Foundation_UnicodeConverter_INCLUDED

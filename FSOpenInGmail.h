//
//  FSOpenInGmail.h
//  OpenInGmail
//
//  Created by Felix Schulze on 25.11.13.
//  Copyright (c) 2013-2015 Felix Schulze. All rights reserved.
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.
//

#import <Foundation/Foundation.h>

@interface FSOpenInGmail : NSObject

/**
 *  Check if Google Mail App is installed.
 *
 *  @return true if Google Mail App is installed
 */
+ (BOOL)canSendGmail;

/**
 *  Send Email with Google Mail App
 *  It automatically checks if Google Mail App is installed.
 *
 *  @param to      receiver email adress
 *  @param subject email subject
 *  @param body    email body
 *
 *  @return true if Google Mail App opend successful
 */
+ (BOOL)sendEmailTo:(NSString *)to subject:(NSString *)subject body:(NSString *)body;

@end

//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/external/icu/android_icu4j/src/main/java/android/icu/text/MessagePattern.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidIcuTextMessagePattern")
#ifdef RESTRICT_AndroidIcuTextMessagePattern
#define INCLUDE_ALL_AndroidIcuTextMessagePattern 0
#else
#define INCLUDE_ALL_AndroidIcuTextMessagePattern 1
#endif
#undef RESTRICT_AndroidIcuTextMessagePattern

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (AndroidIcuTextMessagePattern_) && (INCLUDE_ALL_AndroidIcuTextMessagePattern || defined(INCLUDE_AndroidIcuTextMessagePattern))
#define AndroidIcuTextMessagePattern_

#define RESTRICT_AndroidIcuUtilFreezable 1
#define INCLUDE_AndroidIcuUtilFreezable 1
#include "android/icu/util/Freezable.h"

@class AndroidIcuTextMessagePattern_ApostropheMode;
@class AndroidIcuTextMessagePattern_Part;
@class AndroidIcuTextMessagePattern_Part_Type;
@class JavaLangStringBuilder;

/*!
 @brief Parses and represents ICU MessageFormat patterns.
 Also handles patterns for ChoiceFormat, PluralFormat and SelectFormat.
  Used in the implementations of those classes as well as in tools
  for message validation, translation and format conversion. 
 <p>
  The parser handles all syntax relevant for identifying message arguments.
  This includes "complex" arguments whose style strings contain
  nested MessageFormat pattern substrings.
  For "simple" arguments (with no nested MessageFormat pattern substrings),
  the argument style is not parsed any further. 
 <p>
  The parser handles named and numbered message arguments and allows both in one message. 
 <p>
  Once a pattern has been parsed successfully, iterate through the parsed data
  with countParts(), getPart() and related methods. 
 <p>
  The data logically represents a parse tree, but is stored and accessed
  as a list of "parts" for fast and simple parsing and to minimize object allocations.
  Arguments and nested messages are best handled via recursion.
  For every _START "part", <code>getLimitPartIndex(int)</code> efficiently returns
  the index of the corresponding _LIMIT "part". 
 <p>
  List of "parts": 
 @code

  message = MSG_START (SKIP_SYNTAX | INSERT_CHAR | REPLACE_NUMBER | argument)* MSG_LIMIT
  argument = noneArg | simpleArg | complexArg
  complexArg = choiceArg | pluralArg | selectArg
  noneArg = ARG_START.NONE (ARG_NAME | ARG_NUMBER) ARG_LIMIT.NONE
  simpleArg = ARG_START.SIMPLE (ARG_NAME | ARG_NUMBER) ARG_TYPE [ARG_STYLE] ARG_LIMIT.SIMPLE
  choiceArg = ARG_START.CHOICE (ARG_NAME | ARG_NUMBER) choiceStyle ARG_LIMIT.CHOICE
  pluralArg = ARG_START.PLURAL (ARG_NAME | ARG_NUMBER) pluralStyle ARG_LIMIT.PLURAL
  selectArg = ARG_START.SELECT (ARG_NAME | ARG_NUMBER) selectStyle ARG_LIMIT.SELECT
  choiceStyle = ((ARG_INT | ARG_DOUBLE) ARG_SELECTOR message)+
  pluralStyle = [ARG_INT | ARG_DOUBLE] (ARG_SELECTOR [ARG_INT | ARG_DOUBLE] message)+
  selectStyle = (ARG_SELECTOR message)+ 
  
@endcode
  <ul>
    <li>Literal output text is not represented directly by "parts" but accessed
        between parts of a message, from one part's getLimit() to the next part's getIndex().   
 <li><code>ARG_START.CHOICE</code> stands for an ARG_START Part with ArgType CHOICE.
    <li>In the choiceStyle, the ARG_SELECTOR has the '&lt;', the '#' or
        the less-than-or-equal-to sign (U+2264).   
 <li>In the pluralStyle, the first, optional numeric Part has the "offset:" value.
        The optional numeric Part between each (ARG_SELECTOR, message) pair
        is the value of an explicit-number selector like "=2",
        otherwise the selector is a non-numeric identifier.   
 <li>The REPLACE_NUMBER Part can occur only in an immediate sub-message of the pluralStyle. 
 </ul>
  <p>
  This class is not intended for public subclassing.
 @author Markus Scherer
 */
@interface AndroidIcuTextMessagePattern : NSObject < NSCopying, AndroidIcuUtilFreezable >
@property (readonly, class) jint ARG_NAME_NOT_NUMBER NS_SWIFT_NAME(ARG_NAME_NOT_NUMBER);
@property (readonly, class) jint ARG_NAME_NOT_VALID NS_SWIFT_NAME(ARG_NAME_NOT_VALID);
@property (readonly, class) jdouble NO_NUMERIC_VALUE NS_SWIFT_NAME(NO_NUMERIC_VALUE);

+ (jint)ARG_NAME_NOT_NUMBER;

+ (jint)ARG_NAME_NOT_VALID;

+ (jdouble)NO_NUMERIC_VALUE;

#pragma mark Public

/*!
 @brief Constructs an empty MessagePattern with default ApostropheMode.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs an empty MessagePattern.
 @param mode Explicit ApostropheMode.
 */
- (instancetype __nonnull)initWithAndroidIcuTextMessagePattern_ApostropheMode:(AndroidIcuTextMessagePattern_ApostropheMode *)mode;

/*!
 @brief Constructs a MessagePattern with default ApostropheMode and
  parses the MessageFormat pattern string.
 @param pattern a MessageFormat pattern string
 @throw IllegalArgumentExceptionfor syntax errors in the pattern string
 @throw IndexOutOfBoundsExceptionif certain limits are exceeded
          (e.g., argument number too high, argument name too long, etc.)
 @throw NumberFormatExceptionif a number could not be parsed
 */
- (instancetype __nonnull)initWithNSString:(NSString *)pattern;

/*!
 @brief Returns a version of the parsed pattern string where each ASCII apostrophe
  is doubled (escaped) if it is not already, and if it is not interpreted as quoting syntax.
 <p>
  For example, this turns "I don't '{know}' {gender,select,female{h''er}other{h'im}}."
  into "I don''t '{know}' {gender,select,female{h''er}other{h''im}}."
 @return the deep-auto-quoted version of the parsed pattern string.
 - seealso: MessageFormat#autoQuoteApostrophe(String)
 */
- (NSString *)autoQuoteApostropheDeep;

/*!
 @brief Clears this MessagePattern.
 countParts() will return 0.
 */
- (void)clear;

/*!
 @brief Clears this MessagePattern and sets the ApostropheMode.
 countParts() will return 0.
 @param mode The new ApostropheMode.
 */
- (void)clearPatternAndSetApostropheModeWithAndroidIcuTextMessagePattern_ApostropheMode:(AndroidIcuTextMessagePattern_ApostropheMode *)mode;

/*!
 @brief Creates and returns a copy of this object.
 @return a copy of this object (or itself if frozen).
 */
- (id)java_clone;

/*!
 @brief Creates and returns an unfrozen copy of this object.
 @return a copy of this object.
 */
- (AndroidIcuTextMessagePattern *)cloneAsThawed;

/*!
 @brief Returns the number of "parts" created by parsing the pattern string.
 Returns 0 if no pattern has been parsed or clear() was called.
 @return the number of pattern parts.
 */
- (jint)countParts;

/*!
 @param other another object to compare with.
 @return true if this object is equivalent to the other one.
 */
- (jboolean)isEqual:(id)other;

/*!
 @brief Freezes this object, making it immutable and thread-safe.
 @return this
 */
- (AndroidIcuTextMessagePattern *)freeze;

/*!
 @return this instance's ApostropheMode.
 */
- (AndroidIcuTextMessagePattern_ApostropheMode *)getApostropheMode;

/*!
 @brief Returns the index of the ARG|MSG_LIMIT part corresponding to the ARG|MSG_START at start.
 @param start The index of some Part data (0..countParts()-1);         this Part should be of Type ARG_START or MSG_START.
 @return The first i&gt;start where getPart(i).getType()==ARG|MSG_LIMIT at the same nesting level,
          or start itself if getPartType(msgStart)!=ARG|MSG_START.
 @throw IndexOutOfBoundsExceptionif start is outside the (0..countParts()-1) range
 */
- (jint)getLimitPartIndexWithInt:(jint)start;

/*!
 @brief Returns the numeric value associated with an ARG_INT or ARG_DOUBLE.
 @param part a part of this MessagePattern.
 @return the part's numeric value, or NO_NUMERIC_VALUE if this is not a numeric part.
 */
- (jdouble)getNumericValueWithAndroidIcuTextMessagePattern_Part:(AndroidIcuTextMessagePattern_Part *)part;

/*!
 @brief Gets the i-th pattern "part".
 @param i The index of the Part data. (0..countParts()-1)
 @return the i-th pattern "part".
 @throw IndexOutOfBoundsExceptionif i is outside the (0..countParts()-1) range
 */
- (AndroidIcuTextMessagePattern_Part *)getPartWithInt:(jint)i;

/*!
 @brief Returns the Part.Type of the i-th pattern "part".
 Convenience method for getPart(i).getType().
 @param i The index of the Part data. (0..countParts()-1)
 @return The Part.Type of the i-th Part.
 @throw IndexOutOfBoundsExceptionif i is outside the (0..countParts()-1) range
 */
- (AndroidIcuTextMessagePattern_Part_Type *)getPartTypeWithInt:(jint)i;

/*!
 @brief Returns the pattern index of the specified pattern "part".
 Convenience method for getPart(partIndex).getIndex().
 @param partIndex The index of the Part data. (0..countParts()-1)
 @return The pattern index of this Part.
 @throw IndexOutOfBoundsExceptionif partIndex is outside the (0..countParts()-1) range
 */
- (jint)getPatternIndexWithInt:(jint)partIndex;

/*!
 @return the parsed pattern string (null if none was parsed).
 */
- (NSString *)getPatternString;

/*!
 @brief Returns the "offset:" value of a PluralFormat argument, or 0 if none is specified.
 @param pluralStart the index of the first PluralFormat argument style part. (0..countParts()-1)
 @return the "offset:" value.
 @throw IndexOutOfBoundsExceptionif pluralStart is outside the (0..countParts()-1) range
 */
- (jdouble)getPluralOffsetWithInt:(jint)pluralStart;

/*!
 @brief Returns the substring of the pattern string indicated by the Part.
 Convenience method for getPatternString().substring(part.getIndex(), part.getLimit()).
 @param part a part of this MessagePattern.
 @return the substring associated with part.
 */
- (NSString *)getSubstringWithAndroidIcuTextMessagePattern_Part:(AndroidIcuTextMessagePattern_Part *)part;

/*!
 */
- (NSUInteger)hash;

/*!
 @brief Does the parsed pattern have named arguments like {first_name}?
 @return true if the parsed pattern has at least one named argument.
 */
- (jboolean)hasNamedArguments;

/*!
 @brief Does the parsed pattern have numbered arguments like {2}?
 @return true if the parsed pattern has at least one numbered argument.
 */
- (jboolean)hasNumberedArguments;

/*!
 @brief Determines whether this object is frozen (immutable) or not.
 @return true if this object is frozen.
 */
- (jboolean)isFrozen;

/*!
 @brief Parses a MessageFormat pattern string.
 @param pattern a MessageFormat pattern string
 @return this
 @throw IllegalArgumentExceptionfor syntax errors in the pattern string
 @throw IndexOutOfBoundsExceptionif certain limits are exceeded
          (e.g., argument number too high, argument name too long, etc.)
 @throw NumberFormatExceptionif a number could not be parsed
 */
- (AndroidIcuTextMessagePattern *)parseWithNSString:(NSString *)pattern;

/*!
 @brief Parses a ChoiceFormat pattern string.
 @param pattern a ChoiceFormat pattern string
 @return this
 @throw IllegalArgumentExceptionfor syntax errors in the pattern string
 @throw IndexOutOfBoundsExceptionif certain limits are exceeded
          (e.g., argument number too high, argument name too long, etc.)
 @throw NumberFormatExceptionif a number could not be parsed
 */
- (AndroidIcuTextMessagePattern *)parseChoiceStyleWithNSString:(NSString *)pattern;

/*!
 @brief Parses a PluralFormat pattern string.
 @param pattern a PluralFormat pattern string
 @return this
 @throw IllegalArgumentExceptionfor syntax errors in the pattern string
 @throw IndexOutOfBoundsExceptionif certain limits are exceeded
          (e.g., argument number too high, argument name too long, etc.)
 @throw NumberFormatExceptionif a number could not be parsed
 */
- (AndroidIcuTextMessagePattern *)parsePluralStyleWithNSString:(NSString *)pattern;

/*!
 @brief Parses a SelectFormat pattern string.
 @param pattern a SelectFormat pattern string
 @return this
 @throw IllegalArgumentExceptionfor syntax errors in the pattern string
 @throw IndexOutOfBoundsExceptionif certain limits are exceeded
          (e.g., argument number too high, argument name too long, etc.)
 @throw NumberFormatExceptionif a number could not be parsed
 */
- (AndroidIcuTextMessagePattern *)parseSelectStyleWithNSString:(NSString *)pattern;

/*!
 @brief Compares the part's substring with the input string s.
 @param part a part of this MessagePattern.
 @param s a string.
 @return true if getSubstring(part).equals(s).
 */
- (jboolean)partSubstringMatchesWithAndroidIcuTextMessagePattern_Part:(AndroidIcuTextMessagePattern_Part *)part
                                                         withNSString:(NSString *)s;

/*!
 */
- (NSString *)description;

/*!
 @brief Validates and parses an argument name or argument number string.
 An argument name must be a "pattern identifier", that is, it must contain
  no Unicode Pattern_Syntax or Pattern_White_Space characters.
  If it only contains ASCII digits, then it must be a small integer with no leading zero.
 @param name Input string.
 @return &gt;=0 if the name is a valid number,
          ARG_NAME_NOT_NUMBER (-1) if it is a "pattern identifier" but not all ASCII digits,
          ARG_NAME_NOT_VALID (-2) if it is neither.
 */
+ (jint)validateArgumentNameWithNSString:(NSString *)name;

#pragma mark Package-Private

/*!
 @brief Appends the s[start, limit[ substring to sb, but with only half of the apostrophes
  according to JDK pattern behavior.
 */
+ (void)appendReducedApostrophesWithNSString:(NSString *)s
                                     withInt:(jint)start
                                     withInt:(jint)limit
                   withJavaLangStringBuilder:(JavaLangStringBuilder *)sb;

/*!
 @return true if getApostropheMode() == ApostropheMode.DOUBLE_REQUIRED
 */
- (jboolean)jdkAposMode;

@end

J2OBJC_STATIC_INIT(AndroidIcuTextMessagePattern)

/*!
 @brief Return value from <code>validateArgumentName(String)</code> for when
  the string is a valid "pattern identifier" but not a number.
 */
inline jint AndroidIcuTextMessagePattern_get_ARG_NAME_NOT_NUMBER(void);
#define AndroidIcuTextMessagePattern_ARG_NAME_NOT_NUMBER -1
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuTextMessagePattern, ARG_NAME_NOT_NUMBER, jint)

/*!
 @brief Return value from <code>validateArgumentName(String)</code> for when
  the string is invalid.
 It might not be a valid "pattern identifier",
  or it have only ASCII digits but there is a leading zero or the number is too large.
 */
inline jint AndroidIcuTextMessagePattern_get_ARG_NAME_NOT_VALID(void);
#define AndroidIcuTextMessagePattern_ARG_NAME_NOT_VALID -2
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuTextMessagePattern, ARG_NAME_NOT_VALID, jint)

/*!
 @brief Special value that is returned by getNumericValue(Part) when no
  numeric value is defined for a part.
 - seealso: #getNumericValue
 */
inline jdouble AndroidIcuTextMessagePattern_get_NO_NUMERIC_VALUE(void);
#define AndroidIcuTextMessagePattern_NO_NUMERIC_VALUE -1.23456789E8
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuTextMessagePattern, NO_NUMERIC_VALUE, jdouble)

FOUNDATION_EXPORT void AndroidIcuTextMessagePattern_init(AndroidIcuTextMessagePattern *self);

FOUNDATION_EXPORT AndroidIcuTextMessagePattern *new_AndroidIcuTextMessagePattern_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidIcuTextMessagePattern *create_AndroidIcuTextMessagePattern_init(void);

FOUNDATION_EXPORT void AndroidIcuTextMessagePattern_initWithAndroidIcuTextMessagePattern_ApostropheMode_(AndroidIcuTextMessagePattern *self, AndroidIcuTextMessagePattern_ApostropheMode *mode);

FOUNDATION_EXPORT AndroidIcuTextMessagePattern *new_AndroidIcuTextMessagePattern_initWithAndroidIcuTextMessagePattern_ApostropheMode_(AndroidIcuTextMessagePattern_ApostropheMode *mode) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidIcuTextMessagePattern *create_AndroidIcuTextMessagePattern_initWithAndroidIcuTextMessagePattern_ApostropheMode_(AndroidIcuTextMessagePattern_ApostropheMode *mode);

FOUNDATION_EXPORT void AndroidIcuTextMessagePattern_initWithNSString_(AndroidIcuTextMessagePattern *self, NSString *pattern);

FOUNDATION_EXPORT AndroidIcuTextMessagePattern *new_AndroidIcuTextMessagePattern_initWithNSString_(NSString *pattern) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidIcuTextMessagePattern *create_AndroidIcuTextMessagePattern_initWithNSString_(NSString *pattern);

FOUNDATION_EXPORT jint AndroidIcuTextMessagePattern_validateArgumentNameWithNSString_(NSString *name);

FOUNDATION_EXPORT void AndroidIcuTextMessagePattern_appendReducedApostrophesWithNSString_withInt_withInt_withJavaLangStringBuilder_(NSString *s, jint start, jint limit, JavaLangStringBuilder *sb);

J2OBJC_TYPE_LITERAL_HEADER(AndroidIcuTextMessagePattern)

#endif

#if !defined (AndroidIcuTextMessagePattern_ApostropheMode_) && (INCLUDE_ALL_AndroidIcuTextMessagePattern || defined(INCLUDE_AndroidIcuTextMessagePattern_ApostropheMode))
#define AndroidIcuTextMessagePattern_ApostropheMode_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, AndroidIcuTextMessagePattern_ApostropheMode_Enum) {
  AndroidIcuTextMessagePattern_ApostropheMode_Enum_DOUBLE_OPTIONAL = 0,
  AndroidIcuTextMessagePattern_ApostropheMode_Enum_DOUBLE_REQUIRED = 1,
};

/*!
 @brief Mode for when an apostrophe starts quoted literal text for MessageFormat output.
 The default is DOUBLE_OPTIONAL unless overridden via ICUConfig
  (/com/ibm/icu/ICUConfig.properties). 
 <p>
  A pair of adjacent apostrophes always results in a single apostrophe in the output,
  even when the pair is between two single, text-quoting apostrophes. 
 <p>
  The following table shows examples of desired MessageFormat.format() output
  with the pattern strings that yield that output. 
 <table>
    <tr>
      <th>Desired output</th>
      <th>DOUBLE_OPTIONAL</th>
      <th>DOUBLE_REQUIRED</th>
    </tr>
    <tr>
      <td>I see {many}</td>
      <td>I see '{many}'</td>
      <td>(same)</td>
    </tr>
    <tr>
      <td>I said {'Wow!'}</td>
      <td>I said '{''Wow!''}'</td>
      <td>(same)</td>
    </tr>
    <tr>
      <td>I don't know</td>
      <td>I don't know OR<br> I don''t know</td>
      <td>I don''t know</td>
    </tr>
  </table>
 */
@interface AndroidIcuTextMessagePattern_ApostropheMode : JavaLangEnum

@property (readonly, class, nonnull) AndroidIcuTextMessagePattern_ApostropheMode *DOUBLE_OPTIONAL NS_SWIFT_NAME(DOUBLE_OPTIONAL);
@property (readonly, class, nonnull) AndroidIcuTextMessagePattern_ApostropheMode *DOUBLE_REQUIRED NS_SWIFT_NAME(DOUBLE_REQUIRED);
+ (AndroidIcuTextMessagePattern_ApostropheMode * __nonnull)DOUBLE_OPTIONAL;

+ (AndroidIcuTextMessagePattern_ApostropheMode * __nonnull)DOUBLE_REQUIRED;

#pragma mark Public

+ (AndroidIcuTextMessagePattern_ApostropheMode *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (AndroidIcuTextMessagePattern_ApostropheMode_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(AndroidIcuTextMessagePattern_ApostropheMode)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT AndroidIcuTextMessagePattern_ApostropheMode *AndroidIcuTextMessagePattern_ApostropheMode_values_[];

/*!
 @brief A literal apostrophe is represented by
  either a single or a double apostrophe pattern character.
 Within a MessageFormat pattern, a single apostrophe only starts quoted literal text
  if it immediately precedes a curly brace {},
  or a pipe symbol | if inside a choice format,
  or a pound symbol # if inside a plural format. 
 <p>
  This is the default behavior starting with ICU 4.8.
 */
inline AndroidIcuTextMessagePattern_ApostropheMode *AndroidIcuTextMessagePattern_ApostropheMode_get_DOUBLE_OPTIONAL(void);
J2OBJC_ENUM_CONSTANT(AndroidIcuTextMessagePattern_ApostropheMode, DOUBLE_OPTIONAL)

/*!
 @brief A literal apostrophe must be represented by
  a double apostrophe pattern character.
 A single apostrophe always starts quoted literal text. 
 <p>
  This is the behavior of ICU 4.6 and earlier, and of <code>java.text.MessageFormat</code>.
 */
inline AndroidIcuTextMessagePattern_ApostropheMode *AndroidIcuTextMessagePattern_ApostropheMode_get_DOUBLE_REQUIRED(void);
J2OBJC_ENUM_CONSTANT(AndroidIcuTextMessagePattern_ApostropheMode, DOUBLE_REQUIRED)

FOUNDATION_EXPORT IOSObjectArray *AndroidIcuTextMessagePattern_ApostropheMode_values(void);

FOUNDATION_EXPORT AndroidIcuTextMessagePattern_ApostropheMode *AndroidIcuTextMessagePattern_ApostropheMode_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT AndroidIcuTextMessagePattern_ApostropheMode *AndroidIcuTextMessagePattern_ApostropheMode_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(AndroidIcuTextMessagePattern_ApostropheMode)

#endif

#if !defined (AndroidIcuTextMessagePattern_Part_) && (INCLUDE_ALL_AndroidIcuTextMessagePattern || defined(INCLUDE_AndroidIcuTextMessagePattern_Part))
#define AndroidIcuTextMessagePattern_Part_

@class AndroidIcuTextMessagePattern_ArgType;
@class AndroidIcuTextMessagePattern_Part_Type;

/*!
 @brief A message pattern "part", representing a pattern parsing event.
 There is a part for the start and end of a message or argument,
  for quoting and escaping of and with ASCII apostrophes,
  and for syntax elements of "complex" arguments.
 */
@interface AndroidIcuTextMessagePattern_Part : NSObject

#pragma mark Public

/*!
 @param other another object to compare with.
 @return true if this object is equivalent to the other one.
 */
- (jboolean)isEqual:(id)other;

/*!
 @brief Returns the argument type if this part is of type ARG_START or ARG_LIMIT,
  otherwise ArgType.NONE.
 @return the argument type for this part.
 */
- (AndroidIcuTextMessagePattern_ArgType *)getArgType;

/*!
 @brief Returns the pattern string index associated with this Part.
 @return this part's pattern string index.
 */
- (jint)getIndex;

/*!
 @brief Returns the length of the pattern substring associated with this Part.
 This is 0 for some parts.
 @return this part's pattern substring length.
 */
- (jint)getLength;

/*!
 @brief Returns the pattern string limit (exclusive-end) index associated with this Part.
 Convenience method for getIndex()+getLength().
 @return this part's pattern string limit index, same as getIndex()+getLength().
 */
- (jint)getLimit;

/*!
 @brief Returns the type of this part.
 @return the part type.
 */
- (AndroidIcuTextMessagePattern_Part_Type *)getType;

/*!
 @brief Returns a value associated with this part.
 See the documentation of each part type for details.
 @return the part value.
 */
- (jint)getValue;

/*!
 */
- (NSUInteger)hash;

/*!
 @return a string representation of this part.
 */
- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidIcuTextMessagePattern_Part)

J2OBJC_TYPE_LITERAL_HEADER(AndroidIcuTextMessagePattern_Part)

#endif

#if !defined (AndroidIcuTextMessagePattern_Part_Type_) && (INCLUDE_ALL_AndroidIcuTextMessagePattern || defined(INCLUDE_AndroidIcuTextMessagePattern_Part_Type))
#define AndroidIcuTextMessagePattern_Part_Type_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, AndroidIcuTextMessagePattern_Part_Type_Enum) {
  AndroidIcuTextMessagePattern_Part_Type_Enum_MSG_START = 0,
  AndroidIcuTextMessagePattern_Part_Type_Enum_MSG_LIMIT = 1,
  AndroidIcuTextMessagePattern_Part_Type_Enum_SKIP_SYNTAX = 2,
  AndroidIcuTextMessagePattern_Part_Type_Enum_INSERT_CHAR = 3,
  AndroidIcuTextMessagePattern_Part_Type_Enum_REPLACE_NUMBER = 4,
  AndroidIcuTextMessagePattern_Part_Type_Enum_ARG_START = 5,
  AndroidIcuTextMessagePattern_Part_Type_Enum_ARG_LIMIT = 6,
  AndroidIcuTextMessagePattern_Part_Type_Enum_ARG_NUMBER = 7,
  AndroidIcuTextMessagePattern_Part_Type_Enum_ARG_NAME = 8,
  AndroidIcuTextMessagePattern_Part_Type_Enum_ARG_TYPE = 9,
  AndroidIcuTextMessagePattern_Part_Type_Enum_ARG_STYLE = 10,
  AndroidIcuTextMessagePattern_Part_Type_Enum_ARG_SELECTOR = 11,
  AndroidIcuTextMessagePattern_Part_Type_Enum_ARG_INT = 12,
  AndroidIcuTextMessagePattern_Part_Type_Enum_ARG_DOUBLE = 13,
};

/*!
 @brief Part type constants.
 */
@interface AndroidIcuTextMessagePattern_Part_Type : JavaLangEnum

@property (readonly, class, nonnull) AndroidIcuTextMessagePattern_Part_Type *MSG_START NS_SWIFT_NAME(MSG_START);
@property (readonly, class, nonnull) AndroidIcuTextMessagePattern_Part_Type *MSG_LIMIT NS_SWIFT_NAME(MSG_LIMIT);
@property (readonly, class, nonnull) AndroidIcuTextMessagePattern_Part_Type *SKIP_SYNTAX NS_SWIFT_NAME(SKIP_SYNTAX);
@property (readonly, class, nonnull) AndroidIcuTextMessagePattern_Part_Type *INSERT_CHAR NS_SWIFT_NAME(INSERT_CHAR);
@property (readonly, class, nonnull) AndroidIcuTextMessagePattern_Part_Type *REPLACE_NUMBER NS_SWIFT_NAME(REPLACE_NUMBER);
@property (readonly, class, nonnull) AndroidIcuTextMessagePattern_Part_Type *ARG_START NS_SWIFT_NAME(ARG_START);
@property (readonly, class, nonnull) AndroidIcuTextMessagePattern_Part_Type *ARG_LIMIT NS_SWIFT_NAME(ARG_LIMIT);
@property (readonly, class, nonnull) AndroidIcuTextMessagePattern_Part_Type *ARG_NUMBER NS_SWIFT_NAME(ARG_NUMBER);
@property (readonly, class, nonnull) AndroidIcuTextMessagePattern_Part_Type *ARG_NAME NS_SWIFT_NAME(ARG_NAME);
@property (readonly, class, nonnull) AndroidIcuTextMessagePattern_Part_Type *ARG_TYPE NS_SWIFT_NAME(ARG_TYPE);
@property (readonly, class, nonnull) AndroidIcuTextMessagePattern_Part_Type *ARG_STYLE NS_SWIFT_NAME(ARG_STYLE);
@property (readonly, class, nonnull) AndroidIcuTextMessagePattern_Part_Type *ARG_SELECTOR NS_SWIFT_NAME(ARG_SELECTOR);
@property (readonly, class, nonnull) AndroidIcuTextMessagePattern_Part_Type *ARG_INT NS_SWIFT_NAME(ARG_INT);
@property (readonly, class, nonnull) AndroidIcuTextMessagePattern_Part_Type *ARG_DOUBLE NS_SWIFT_NAME(ARG_DOUBLE);
+ (AndroidIcuTextMessagePattern_Part_Type * __nonnull)MSG_START;

+ (AndroidIcuTextMessagePattern_Part_Type * __nonnull)MSG_LIMIT;

+ (AndroidIcuTextMessagePattern_Part_Type * __nonnull)SKIP_SYNTAX;

+ (AndroidIcuTextMessagePattern_Part_Type * __nonnull)INSERT_CHAR;

+ (AndroidIcuTextMessagePattern_Part_Type * __nonnull)REPLACE_NUMBER;

+ (AndroidIcuTextMessagePattern_Part_Type * __nonnull)ARG_START;

+ (AndroidIcuTextMessagePattern_Part_Type * __nonnull)ARG_LIMIT;

+ (AndroidIcuTextMessagePattern_Part_Type * __nonnull)ARG_NUMBER;

+ (AndroidIcuTextMessagePattern_Part_Type * __nonnull)ARG_NAME;

+ (AndroidIcuTextMessagePattern_Part_Type * __nonnull)ARG_TYPE;

+ (AndroidIcuTextMessagePattern_Part_Type * __nonnull)ARG_STYLE;

+ (AndroidIcuTextMessagePattern_Part_Type * __nonnull)ARG_SELECTOR;

+ (AndroidIcuTextMessagePattern_Part_Type * __nonnull)ARG_INT;

+ (AndroidIcuTextMessagePattern_Part_Type * __nonnull)ARG_DOUBLE;

#pragma mark Public

/*!
 @brief Indicates whether this part has a numeric value.
 If so, then that numeric value can be retrieved via <code>MessagePattern.getNumericValue(Part)</code>.
 @return true if this part has a numeric value.
 */
- (jboolean)hasNumericValue;

+ (AndroidIcuTextMessagePattern_Part_Type *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (AndroidIcuTextMessagePattern_Part_Type_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(AndroidIcuTextMessagePattern_Part_Type)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT AndroidIcuTextMessagePattern_Part_Type *AndroidIcuTextMessagePattern_Part_Type_values_[];

/*!
 @brief Start of a message pattern (main or nested).
 The length is 0 for the top-level message
  and for a choice argument sub-message, otherwise 1 for the '{'.
  The value indicates the nesting level, starting with 0 for the main message. 
 <p>
  There is always a later MSG_LIMIT part.
 */
inline AndroidIcuTextMessagePattern_Part_Type *AndroidIcuTextMessagePattern_Part_Type_get_MSG_START(void);
J2OBJC_ENUM_CONSTANT(AndroidIcuTextMessagePattern_Part_Type, MSG_START)

/*!
 @brief End of a message pattern (main or nested).
 The length is 0 for the top-level message and
  the last sub-message of a choice argument,
  otherwise 1 for the '}' or (in a choice argument style) the '|'.
  The value indicates the nesting level, starting with 0 for the main message.
 */
inline AndroidIcuTextMessagePattern_Part_Type *AndroidIcuTextMessagePattern_Part_Type_get_MSG_LIMIT(void);
J2OBJC_ENUM_CONSTANT(AndroidIcuTextMessagePattern_Part_Type, MSG_LIMIT)

/*!
 @brief Indicates a substring of the pattern string which is to be skipped when formatting.
 For example, an apostrophe that begins or ends quoted text
  would be indicated with such a part.
  The value is undefined and currently always 0.
 */
inline AndroidIcuTextMessagePattern_Part_Type *AndroidIcuTextMessagePattern_Part_Type_get_SKIP_SYNTAX(void);
J2OBJC_ENUM_CONSTANT(AndroidIcuTextMessagePattern_Part_Type, SKIP_SYNTAX)

/*!
 @brief Indicates that a syntax character needs to be inserted for auto-quoting.
 The length is 0.
  The value is the character code of the insertion character. (U+0027=APOSTROPHE)
 */
inline AndroidIcuTextMessagePattern_Part_Type *AndroidIcuTextMessagePattern_Part_Type_get_INSERT_CHAR(void);
J2OBJC_ENUM_CONSTANT(AndroidIcuTextMessagePattern_Part_Type, INSERT_CHAR)

/*!
 @brief Indicates a syntactic (non-escaped) # symbol in a plural variant.
 When formatting, replace this part's substring with the
  (value-offset) for the plural argument value.
  The value is undefined and currently always 0.
 */
inline AndroidIcuTextMessagePattern_Part_Type *AndroidIcuTextMessagePattern_Part_Type_get_REPLACE_NUMBER(void);
J2OBJC_ENUM_CONSTANT(AndroidIcuTextMessagePattern_Part_Type, REPLACE_NUMBER)

/*!
 @brief Start of an argument.
 The length is 1 for the '{'.
  The value is the ordinal value of the ArgType. Use getArgType(). 
 <p>
  This part is followed by either an ARG_NUMBER or ARG_NAME,
  followed by optional argument sub-parts (see ArgType constants)
  and finally an ARG_LIMIT part.
 */
inline AndroidIcuTextMessagePattern_Part_Type *AndroidIcuTextMessagePattern_Part_Type_get_ARG_START(void);
J2OBJC_ENUM_CONSTANT(AndroidIcuTextMessagePattern_Part_Type, ARG_START)

/*!
 @brief End of an argument.
 The length is 1 for the '}'.
  The value is the ordinal value of the ArgType. Use getArgType().
 */
inline AndroidIcuTextMessagePattern_Part_Type *AndroidIcuTextMessagePattern_Part_Type_get_ARG_LIMIT(void);
J2OBJC_ENUM_CONSTANT(AndroidIcuTextMessagePattern_Part_Type, ARG_LIMIT)

/*!
 @brief The argument number, provided by the value.
 */
inline AndroidIcuTextMessagePattern_Part_Type *AndroidIcuTextMessagePattern_Part_Type_get_ARG_NUMBER(void);
J2OBJC_ENUM_CONSTANT(AndroidIcuTextMessagePattern_Part_Type, ARG_NUMBER)

/*!
 @brief The argument name.
 The value is undefined and currently always 0.
 */
inline AndroidIcuTextMessagePattern_Part_Type *AndroidIcuTextMessagePattern_Part_Type_get_ARG_NAME(void);
J2OBJC_ENUM_CONSTANT(AndroidIcuTextMessagePattern_Part_Type, ARG_NAME)

/*!
 @brief The argument type.
 The value is undefined and currently always 0.
 */
inline AndroidIcuTextMessagePattern_Part_Type *AndroidIcuTextMessagePattern_Part_Type_get_ARG_TYPE(void);
J2OBJC_ENUM_CONSTANT(AndroidIcuTextMessagePattern_Part_Type, ARG_TYPE)

/*!
 @brief The argument style text.
 The value is undefined and currently always 0.
 */
inline AndroidIcuTextMessagePattern_Part_Type *AndroidIcuTextMessagePattern_Part_Type_get_ARG_STYLE(void);
J2OBJC_ENUM_CONSTANT(AndroidIcuTextMessagePattern_Part_Type, ARG_STYLE)

/*!
 @brief A selector substring in a "complex" argument style.
 The value is undefined and currently always 0.
 */
inline AndroidIcuTextMessagePattern_Part_Type *AndroidIcuTextMessagePattern_Part_Type_get_ARG_SELECTOR(void);
J2OBJC_ENUM_CONSTANT(AndroidIcuTextMessagePattern_Part_Type, ARG_SELECTOR)

/*!
 @brief An integer value, for example the offset or an explicit selector value
  in a PluralFormat style.
 The part value is the integer value.
 */
inline AndroidIcuTextMessagePattern_Part_Type *AndroidIcuTextMessagePattern_Part_Type_get_ARG_INT(void);
J2OBJC_ENUM_CONSTANT(AndroidIcuTextMessagePattern_Part_Type, ARG_INT)

/*!
 @brief A numeric value, for example the offset or an explicit selector value
  in a PluralFormat style.
 The part value is an index into an internal array of numeric values;
  use getNumericValue().
 */
inline AndroidIcuTextMessagePattern_Part_Type *AndroidIcuTextMessagePattern_Part_Type_get_ARG_DOUBLE(void);
J2OBJC_ENUM_CONSTANT(AndroidIcuTextMessagePattern_Part_Type, ARG_DOUBLE)

FOUNDATION_EXPORT IOSObjectArray *AndroidIcuTextMessagePattern_Part_Type_values(void);

FOUNDATION_EXPORT AndroidIcuTextMessagePattern_Part_Type *AndroidIcuTextMessagePattern_Part_Type_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT AndroidIcuTextMessagePattern_Part_Type *AndroidIcuTextMessagePattern_Part_Type_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(AndroidIcuTextMessagePattern_Part_Type)

#endif

#if !defined (AndroidIcuTextMessagePattern_ArgType_) && (INCLUDE_ALL_AndroidIcuTextMessagePattern || defined(INCLUDE_AndroidIcuTextMessagePattern_ArgType))
#define AndroidIcuTextMessagePattern_ArgType_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, AndroidIcuTextMessagePattern_ArgType_Enum) {
  AndroidIcuTextMessagePattern_ArgType_Enum_NONE = 0,
  AndroidIcuTextMessagePattern_ArgType_Enum_SIMPLE = 1,
  AndroidIcuTextMessagePattern_ArgType_Enum_CHOICE = 2,
  AndroidIcuTextMessagePattern_ArgType_Enum_PLURAL = 3,
  AndroidIcuTextMessagePattern_ArgType_Enum_SELECT = 4,
  AndroidIcuTextMessagePattern_ArgType_Enum_SELECTORDINAL = 5,
};

/*!
 @brief Argument type constants.
 Returned by Part.getArgType() for ARG_START and ARG_LIMIT parts.
  Messages nested inside an argument are each delimited by MSG_START and MSG_LIMIT,
  with a nesting level one greater than the surrounding message.
 */
@interface AndroidIcuTextMessagePattern_ArgType : JavaLangEnum

@property (readonly, class, nonnull) AndroidIcuTextMessagePattern_ArgType *NONE NS_SWIFT_NAME(NONE);
@property (readonly, class, nonnull) AndroidIcuTextMessagePattern_ArgType *SIMPLE NS_SWIFT_NAME(SIMPLE);
@property (readonly, class, nonnull) AndroidIcuTextMessagePattern_ArgType *CHOICE NS_SWIFT_NAME(CHOICE);
@property (readonly, class, nonnull) AndroidIcuTextMessagePattern_ArgType *PLURAL NS_SWIFT_NAME(PLURAL);
@property (readonly, class, nonnull) AndroidIcuTextMessagePattern_ArgType *SELECT NS_SWIFT_NAME(SELECT);
@property (readonly, class, nonnull) AndroidIcuTextMessagePattern_ArgType *SELECTORDINAL NS_SWIFT_NAME(SELECTORDINAL);
+ (AndroidIcuTextMessagePattern_ArgType * __nonnull)NONE;

+ (AndroidIcuTextMessagePattern_ArgType * __nonnull)SIMPLE;

+ (AndroidIcuTextMessagePattern_ArgType * __nonnull)CHOICE;

+ (AndroidIcuTextMessagePattern_ArgType * __nonnull)PLURAL;

+ (AndroidIcuTextMessagePattern_ArgType * __nonnull)SELECT;

+ (AndroidIcuTextMessagePattern_ArgType * __nonnull)SELECTORDINAL;

#pragma mark Public

/*!
 @return true if the argument type has a plural style part sequence and semantics,
  for example <code>ArgType.PLURAL</code> and <code>ArgType.SELECTORDINAL</code>.
 */
- (jboolean)hasPluralStyle;

+ (AndroidIcuTextMessagePattern_ArgType *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (AndroidIcuTextMessagePattern_ArgType_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(AndroidIcuTextMessagePattern_ArgType)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT AndroidIcuTextMessagePattern_ArgType *AndroidIcuTextMessagePattern_ArgType_values_[];

/*!
 @brief The argument has no specified type.
 */
inline AndroidIcuTextMessagePattern_ArgType *AndroidIcuTextMessagePattern_ArgType_get_NONE(void);
J2OBJC_ENUM_CONSTANT(AndroidIcuTextMessagePattern_ArgType, NONE)

/*!
 @brief The argument has a "simple" type which is provided by the ARG_TYPE part.
 An ARG_STYLE part might follow that.
 */
inline AndroidIcuTextMessagePattern_ArgType *AndroidIcuTextMessagePattern_ArgType_get_SIMPLE(void);
J2OBJC_ENUM_CONSTANT(AndroidIcuTextMessagePattern_ArgType, SIMPLE)

/*!
 @brief The argument is a ChoiceFormat with one or more
  ((ARG_INT | ARG_DOUBLE), ARG_SELECTOR, message) tuples.
 */
inline AndroidIcuTextMessagePattern_ArgType *AndroidIcuTextMessagePattern_ArgType_get_CHOICE(void);
J2OBJC_ENUM_CONSTANT(AndroidIcuTextMessagePattern_ArgType, CHOICE)

/*!
 @brief The argument is a cardinal-number PluralFormat with an optional ARG_INT or ARG_DOUBLE offset
  (e.g., offset:1)
  and one or more (ARG_SELECTOR [explicit-value] message) tuples.
 If the selector has an explicit value (e.g., =2), then
  that value is provided by the ARG_INT or ARG_DOUBLE part preceding the message.
  Otherwise the message immediately follows the ARG_SELECTOR.
 */
inline AndroidIcuTextMessagePattern_ArgType *AndroidIcuTextMessagePattern_ArgType_get_PLURAL(void);
J2OBJC_ENUM_CONSTANT(AndroidIcuTextMessagePattern_ArgType, PLURAL)

/*!
 @brief The argument is a SelectFormat with one or more (ARG_SELECTOR, message) pairs.
 */
inline AndroidIcuTextMessagePattern_ArgType *AndroidIcuTextMessagePattern_ArgType_get_SELECT(void);
J2OBJC_ENUM_CONSTANT(AndroidIcuTextMessagePattern_ArgType, SELECT)

/*!
 @brief The argument is an ordinal-number PluralFormat
  with the same style parts sequence and semantics as <code>ArgType.PLURAL</code>.
 */
inline AndroidIcuTextMessagePattern_ArgType *AndroidIcuTextMessagePattern_ArgType_get_SELECTORDINAL(void);
J2OBJC_ENUM_CONSTANT(AndroidIcuTextMessagePattern_ArgType, SELECTORDINAL)

FOUNDATION_EXPORT IOSObjectArray *AndroidIcuTextMessagePattern_ArgType_values(void);

FOUNDATION_EXPORT AndroidIcuTextMessagePattern_ArgType *AndroidIcuTextMessagePattern_ArgType_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT AndroidIcuTextMessagePattern_ArgType *AndroidIcuTextMessagePattern_ArgType_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(AndroidIcuTextMessagePattern_ArgType)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_AndroidIcuTextMessagePattern")
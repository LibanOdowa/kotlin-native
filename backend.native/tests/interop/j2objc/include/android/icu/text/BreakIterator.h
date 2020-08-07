//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/external/icu/android_icu4j/src/main/java/android/icu/text/BreakIterator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidIcuTextBreakIterator")
#ifdef RESTRICT_AndroidIcuTextBreakIterator
#define INCLUDE_ALL_AndroidIcuTextBreakIterator 0
#else
#define INCLUDE_ALL_AndroidIcuTextBreakIterator 1
#endif
#undef RESTRICT_AndroidIcuTextBreakIterator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (AndroidIcuTextBreakIterator_) && (INCLUDE_ALL_AndroidIcuTextBreakIterator || defined(INCLUDE_AndroidIcuTextBreakIterator))
#define AndroidIcuTextBreakIterator_

@class AndroidIcuUtilULocale;
@class AndroidIcuUtilULocale_Type;
@class IOSIntArray;
@class IOSObjectArray;
@class JavaUtilLocale;
@protocol JavaLangCharSequence;
@protocol JavaTextCharacterIterator;

/*!
 @brief <strong>[icu enhancement]</strong> ICU's replacement for <code>java.text.BreakIterator</code>.
 &nbsp;Methods, fields, and other functionality specific to ICU are labeled '<strong>[icu]</strong>'.
 <p>A class that locates boundaries in text.  This class defines a protocol for
  objects that break up a piece of natural-language text according to a set
  of criteria.  Instances or subclasses of BreakIterator can be provided, for
  example, to break a piece of text into words, sentences, or logical characters
  according to the conventions of some language or group of languages.
  We provide five built-in types of BreakIterator: 
 <ul><li>getTitleInstance() returns a BreakIterator that locates boundaries
  between title breaks. 
 <li>getSentenceInstance() returns a BreakIterator that locates boundaries
  between sentences.  This is useful for triple-click selection, for example. 
 <li>getWordInstance() returns a BreakIterator that locates boundaries between
  words.  This is useful for double-click selection or "find whole words" searches.
  This type of BreakIterator makes sure there is a boundary position at the
  beginning and end of each legal word.  (Numbers count as words, too.)  Whitespace
  and punctuation are kept separate from real words. 
 <li>getLineInstance() returns a BreakIterator that locates positions where it is
  legal for a text editor to wrap lines.  This is similar to word breaking, but
  not the same: punctuation and whitespace are generally kept with words (you don't
  want a line to start with whitespace, for example), and some special characters
  can force a position to be considered a line-break position or prevent a position
  from being a line-break position. 
 <li>getCharacterInstance() returns a BreakIterator that locates boundaries between
  logical characters.  Because of the structure of the Unicode encoding, a logical
  character may be stored internally as more than one Unicode code point.  (A with an
  umlaut may be stored as an a followed by a separate combining umlaut character,
  for example, but the user still thinks of it as one character.)  This iterator allows
  various processes (especially text editors) to treat as characters the units of text
  that a user would think of as characters, rather than the units of text that the
  computer sees as "characters".</ul>
  The text boundary positions are found according to the rules
  described in Unicode Standard Annex #29, Text Boundaries, and
  Unicode Standard Annex #14, Line Breaking Properties.  These
  are available at http://www.unicode.org/reports/tr14/ and
  http://www.unicode.org/reports/tr29/. 
 <p>
  BreakIterator's interface follows an "iterator" model (hence the name), meaning it
  has a concept of a "current position" and methods like first(), last(), next(),
  and previous() that update the current position.  All BreakIterators uphold the
  following invariants: 
 <ul><li>The beginning and end of the text are always treated as boundary positions. 
 <li>The current position of the iterator is always a boundary position (random-
  access methods move the iterator to the nearest boundary position before or
  after the specified position, not _to_ the specified position). 
 <li>DONE is used as a flag to indicate when iteration has stopped.  DONE is only
  returned when the current position is the end of the text and the user calls next(),
  or when the current position is the beginning of the text and the user calls
  previous(). 
 <li>Break positions are numbered by the positions of the characters that follow
  them.  Thus, under normal circumstances, the position before the first character
  is 0, the position after the first character is 1, and the position after the
  last character is 1 plus the length of the string. 
 <li>The client can change the position of an iterator, or the text it analyzes,
  at will, but cannot change the behavior.  If the user wants different behavior, he
  must instantiate a new iterator.</ul>
  BreakIterator accesses the text it analyzes through a CharacterIterator, which makes
  it possible to use BreakIterator to analyze text in any text-storage vehicle that
  provides a CharacterIterator interface. When BreakIterator.setText(CharacterIterator) or
  getText() was called, the CharacterIterator must not be modified, or else the BreakIterator
  behavior is undefined. In particular, call BreakIterator.setText(),
  not CharacterIterator.setText(). 
 <b>Note:</b>  Some types of BreakIterator can take a long time to create, and
  instances of BreakIterator are not currently cached by the system.  For
  optimal performance, keep instances of BreakIterator around as long as makes
  sense.  For example, when word-wrapping a document, don't create and destroy a
  new BreakIterator for each line.  Create one break iterator for the whole document
  (or whatever stretch of text you're wrapping) and use it to do the whole job of
  wrapping the text. 
 <P>
  <strong>Examples</strong>:<P>
  Creating and using text boundaries 
 <blockquote>
  @code

  public static void main(String args[]) {
       if (args.length == 1) {
           String stringToExamine = args[0];
           //print each word in order
           BreakIterator boundary = BreakIterator.getWordInstance();
           boundary.setText(stringToExamine);
           printEachForward(boundary, stringToExamine);
           //print each sentence in reverse order
           boundary = BreakIterator.getSentenceInstance(Locale.US);
           boundary.setText(stringToExamine);
           printEachBackward(boundary, stringToExamine);
           printFirst(boundary, stringToExamine);
           printLast(boundary, stringToExamine);
       }     }     
  
@endcode
  </blockquote>
  Print each element in order 
 <blockquote>
  @code

  public static void printEachForward(BreakIterator boundary, String source) {
      int start = boundary.first();
      for (int end = boundary.next();
           end != BreakIterator.DONE;
           start = end, end = boundary.next()) {
           System.out.println(source.substring(start,end));
      }    }    
  
@endcode
  </blockquote>
  Print each element in reverse order 
 <blockquote>
  @code

  public static void printEachBackward(BreakIterator boundary, String source) {
      int end = boundary.last();
      for (int start = boundary.previous();
           start != BreakIterator.DONE;
           end = start, start = boundary.previous()) {
          System.out.println(source.substring(start,end));
      }    }    
  
@endcode
  </blockquote>
  Print first element 
 <blockquote>
  @code

  public static void printFirst(BreakIterator boundary, String source) {
      int start = boundary.first();
      int end = boundary.next();
      System.out.println(source.substring(start,end));
  } 
  
@endcode
  </blockquote>
  Print last element 
 <blockquote>
  @code

  public static void printLast(BreakIterator boundary, String source) {
      int end = boundary.last();
      int start = boundary.previous();
      System.out.println(source.substring(start,end));
  } 
  
@endcode
  </blockquote>
  Print the element at a specified position 
 <blockquote>
  @code

  public static void printAt(BreakIterator boundary, int pos, String source) {
      int end = boundary.following(pos);
      int start = boundary.previous();
      System.out.println(source.substring(start,end));
  } 
  
@endcode
  </blockquote>
  Find the next word 
 <blockquote>
  @code

  public static int nextWordStartAfter(int pos, String text) {
      BreakIterator wb = BreakIterator.getWordInstance();
      wb.setText(text);
      int wordStart = wb.following(pos);
      for (;;) {
          int wordLimit = wb.next();
          if (wordLimit == BreakIterator.DONE) {
              return BreakIterator.DONE;
          }
          int wordStatus = wb.getRuleStatus();
          if (wordStatus != BreakIterator.WORD_NONE) {
              return wordStart;
          }
          wordStart = wordLimit;
       }     }     
  
@endcode
  The iterator returned by <code>getWordInstance</code> is unique in that
  the break positions it returns don't represent both the start and end of the
  thing being iterated over.  That is, a sentence-break iterator returns breaks
  that each represent the end of one sentence and the beginning of the next.
  With the word-break iterator, the characters between two boundaries might be a
  word, or they might be the punctuation or whitespace between two words.  The
  above code uses <code>getRuleStatus</code> to identify and ignore boundaries associated
  with punctuation or other non-word characters. 
 </blockquote>
 - seealso: CharacterIterator
 */
@interface AndroidIcuTextBreakIterator : NSObject < NSCopying >
@property (readonly, class) jint DONE NS_SWIFT_NAME(DONE);
@property (readonly, class) jint WORD_NONE NS_SWIFT_NAME(WORD_NONE);
@property (readonly, class) jint WORD_NONE_LIMIT NS_SWIFT_NAME(WORD_NONE_LIMIT);
@property (readonly, class) jint WORD_NUMBER NS_SWIFT_NAME(WORD_NUMBER);
@property (readonly, class) jint WORD_NUMBER_LIMIT NS_SWIFT_NAME(WORD_NUMBER_LIMIT);
@property (readonly, class) jint WORD_LETTER NS_SWIFT_NAME(WORD_LETTER);
@property (readonly, class) jint WORD_LETTER_LIMIT NS_SWIFT_NAME(WORD_LETTER_LIMIT);
@property (readonly, class) jint WORD_KANA NS_SWIFT_NAME(WORD_KANA);
@property (readonly, class) jint WORD_KANA_LIMIT NS_SWIFT_NAME(WORD_KANA_LIMIT);
@property (readonly, class) jint WORD_IDEO NS_SWIFT_NAME(WORD_IDEO);
@property (readonly, class) jint WORD_IDEO_LIMIT NS_SWIFT_NAME(WORD_IDEO_LIMIT);
@property (readonly, class) jint KIND_CHARACTER NS_SWIFT_NAME(KIND_CHARACTER);
@property (readonly, class) jint KIND_WORD NS_SWIFT_NAME(KIND_WORD);
@property (readonly, class) jint KIND_LINE NS_SWIFT_NAME(KIND_LINE);
@property (readonly, class) jint KIND_SENTENCE NS_SWIFT_NAME(KIND_SENTENCE);
@property (readonly, class) jint KIND_TITLE NS_SWIFT_NAME(KIND_TITLE);

+ (jint)DONE;

+ (jint)WORD_NONE;

+ (jint)WORD_NONE_LIMIT;

+ (jint)WORD_NUMBER;

+ (jint)WORD_NUMBER_LIMIT;

+ (jint)WORD_LETTER;

+ (jint)WORD_LETTER_LIMIT;

+ (jint)WORD_KANA;

+ (jint)WORD_KANA_LIMIT;

+ (jint)WORD_IDEO;

+ (jint)WORD_IDEO_LIMIT;

+ (jint)KIND_CHARACTER;

+ (jint)KIND_WORD;

+ (jint)KIND_LINE;

+ (jint)KIND_SENTENCE;

+ (jint)KIND_TITLE;

#pragma mark Public

/*!
 @brief Clone method.Creates another BreakIterator with the same behavior and
  current state as this one.
 @return The clone.
 */
- (id)java_clone;

/*!
 @brief Return the iterator's current position.
 @return The iterator's current position.
 */
- (jint)current;

/*!
 @brief Set the iterator to the first boundary position.This is always the beginning
  index of the text this iterator iterates over.
 For example, if
  the iterator iterates over a whole string, this function will
  always return 0.
 @return The character offset of the beginning of the stretch of text
  being broken.
 */
- (jint)first;

/*!
 @brief Sets the iterator's current iteration position to be the first
  boundary position following the specified position.
 (Whether the
  specified position is itself a boundary position or not doesn't
  matter-- this function always moves the iteration position to the
  first boundary after the specified position.)  If the specified
  position is the past-the-end position, returns DONE.
 @param offset The character position to start searching from.
 @return The position of the first boundary position following
  "offset" (whether or not "offset" itself is a boundary position),
  or DONE if "offset" is the past-the-end offset.
 */
- (jint)followingWithInt:(jint)offset;

/*!
 @brief Returns a list of locales for which BreakIterators can be used.
 @return An array of Locales.  All of the locales in the array can
  be used when creating a BreakIterator.
 */
+ (IOSObjectArray *)getAvailableLocales;

/*!
 @brief <strong>[icu]</strong> Returns a list of locales for which BreakIterators can be used.
 @return An array of Locales.  All of the locales in the array can
  be used when creating a BreakIterator.
 */
+ (IOSObjectArray *)getAvailableULocales;

/*!
 @brief Returns a particular kind of BreakIterator for a locale.
 Avoids writing a switch statement with getXYZInstance(where) calls.
 */
+ (AndroidIcuTextBreakIterator *)getBreakInstanceWithAndroidIcuUtilULocale:(AndroidIcuUtilULocale *)where
                                                                   withInt:(jint)kind __attribute__((deprecated));

/*!
 @brief Returns a new instance of BreakIterator that locates logical-character
  boundaries.This function assumes that the text being analyzed is
  in the default locale's language.
 @return A new instance of BreakIterator that locates logical-character
  boundaries.
 */
+ (AndroidIcuTextBreakIterator *)getCharacterInstance;

/*!
 @brief Returns a new instance of BreakIterator that locates logical-character
  boundaries.
 @param where A Locale specifying the language of the text being analyzed.
 @return A new instance of BreakIterator that locates logical-character
  boundaries.
 @throw NullPointerExceptionif <code>where</code> is null.
 */
+ (AndroidIcuTextBreakIterator *)getCharacterInstanceWithJavaUtilLocale:(JavaUtilLocale *)where;

/*!
 @brief <strong>[icu]</strong> Returns a new instance of BreakIterator that locates logical-character
  boundaries.
 @param where A Locale specifying the language of the text being analyzed.
 @return A new instance of BreakIterator that locates logical-character
  boundaries.
 @throw NullPointerExceptionif <code>where</code> is null.
 */
+ (AndroidIcuTextBreakIterator *)getCharacterInstanceWithAndroidIcuUtilULocale:(AndroidIcuUtilULocale *)where;

/*!
 @brief Returns a new instance of BreakIterator that locates legal line-
  wrapping positions.This function assumes the text being broken
  is in the default locale's language.
 @return A new instance of BreakIterator that locates legal
  line-wrapping positions.
 */
+ (AndroidIcuTextBreakIterator *)getLineInstance;

/*!
 @brief Returns a new instance of BreakIterator that locates legal line-
  wrapping positions.
 @param where A Locale specifying the language of the text being broken.
 @return A new instance of BreakIterator that locates legal
  line-wrapping positions.
 @throw NullPointerExceptionif <code>where</code> is null.
 */
+ (AndroidIcuTextBreakIterator *)getLineInstanceWithJavaUtilLocale:(JavaUtilLocale *)where;

/*!
 @brief <strong>[icu]</strong> Returns a new instance of BreakIterator that locates legal line-
  wrapping positions.
 @param where A Locale specifying the language of the text being broken.
 @return A new instance of BreakIterator that locates legal
  line-wrapping positions.
 @throw NullPointerExceptionif <code>where</code> is null.
 */
+ (AndroidIcuTextBreakIterator *)getLineInstanceWithAndroidIcuUtilULocale:(AndroidIcuUtilULocale *)where;

/*!
 @brief <strong>[icu]</strong> Returns the locale that was used to create this object, or null.
 This may may differ from the locale requested at the time of
  this object's creation.  For example, if an object is created
  for locale <tt>en_US_CALIFORNIA</tt>, the actual data may be
  drawn from <tt>en</tt> (the <i>actual</i> locale), and 
 <tt>en_US</tt> may be the most specific locale that exists (the 
 <i>valid</i> locale). 
 <p>Note: The <i>actual</i> locale is returned correctly, but the <i>valid</i>
  locale is not, in most cases.
 @param type type of information requested, either <code>android.icu.util.ULocale.VALID_LOCALE</code>
   or <code>android.icu.util.ULocale.ACTUAL_LOCALE</code>
  .
 @return the information specified by <i>type</i>, or null if
  this object was not constructed from locale data.
 - seealso: android.icu.util.ULocale
 - seealso: android.icu.util.ULocale#VALID_LOCALE
 - seealso: android.icu.util.ULocale#ACTUAL_LOCALE
 */
- (AndroidIcuUtilULocale *)getLocaleWithAndroidIcuUtilULocale_Type:(AndroidIcuUtilULocale_Type *)type;

/*!
 @brief For RuleBasedBreakIterators, return the status tag from the
  break rule that determined the most recently
  returned break position.
 <p>
  For break iterator types that do not support a rule status,
  a default value of 0 is returned. 
 <p>
 @return The status from the break rule that determined the most recently
          returned break position.
 */
- (jint)getRuleStatus;

/*!
 @brief For RuleBasedBreakIterators, get the status (tag) values from the break rule(s)
  that determined the most recently returned break position.
 <p>
  For break iterator types that do not support rule status,
  no values are returned. 
 <p>
  If the size  of the output array is insufficient to hold the data,
   the output will be truncated to the available length.  No exception
   will be thrown.
 @param fillInArray an array to be filled in with the status values.
 @return The number of rule status values from rules that determined
                   the most recent boundary returned by the break iterator.
                   In the event that the array is too small, the return value
                   is the total number of status values that were available,
                   not the reduced number that were actually returned.
 */
- (jint)getRuleStatusVecWithIntArray:(IOSIntArray *)fillInArray;

/*!
 @brief Returns a new instance of BreakIterator that locates sentence boundaries.
 This function assumes the text being analyzed is in the default locale's
  language.
 @return A new instance of BreakIterator that locates sentence boundaries.
 */
+ (AndroidIcuTextBreakIterator *)getSentenceInstance;

/*!
 @brief Returns a new instance of BreakIterator that locates sentence boundaries.
 @param where A Locale specifying the language of the text being analyzed.
 @return A new instance of BreakIterator that locates sentence boundaries.
 @throw NullPointerExceptionif <code>where</code> is null.
 */
+ (AndroidIcuTextBreakIterator *)getSentenceInstanceWithJavaUtilLocale:(JavaUtilLocale *)where;

/*!
 @brief <strong>[icu]</strong> Returns a new instance of BreakIterator that locates sentence boundaries.
 @param where A Locale specifying the language of the text being analyzed.
 @return A new instance of BreakIterator that locates sentence boundaries.
 @throw NullPointerExceptionif <code>where</code> is null.
 */
+ (AndroidIcuTextBreakIterator *)getSentenceInstanceWithAndroidIcuUtilULocale:(AndroidIcuUtilULocale *)where;

/*!
 @brief Returns a CharacterIterator over the text being analyzed.
 For at least some subclasses of BreakIterator, this is a reference
  to the <b>actual iterator being used</b> by the BreakIterator,
  and therefore, this function's return value should be treated as 
 <tt>const</tt>.  No guarantees are made about the current position
  of this iterator when it is returned.  If you need to move that
  position to examine the text, clone this function's return value first.
 @return A CharacterIterator over the text being analyzed.
 */
- (id<JavaTextCharacterIterator>)getText;

/*!
 @brief <strong>[icu]</strong> Returns a new instance of BreakIterator that locates title boundaries.
 This function assumes the text being analyzed is in the default locale's
  language. The iterator returned locates title boundaries as described for
  Unicode 3.2 only. For Unicode 4.0 and above title boundary iteration,
  please use a word boundary iterator. <code>getWordInstance</code>
 @return A new instance of BreakIterator that locates title boundaries.
 */
+ (AndroidIcuTextBreakIterator *)getTitleInstance;

/*!
 @brief <strong>[icu]</strong> Returns a new instance of BreakIterator that locates title boundaries.
 The iterator returned locates title boundaries as described for
  Unicode 3.2 only. For Unicode 4.0 and above title boundary iteration,
  please use Word Boundary iterator.<code>getWordInstance</code>
 @param where A Locale specifying the language of the text being analyzed.
 @return A new instance of BreakIterator that locates title boundaries.
 @throw NullPointerExceptionif <code>where</code> is null.
 */
+ (AndroidIcuTextBreakIterator *)getTitleInstanceWithJavaUtilLocale:(JavaUtilLocale *)where;

/*!
 @brief <strong>[icu]</strong> Returns a new instance of BreakIterator that locates title boundaries.
 The iterator returned locates title boundaries as described for
  Unicode 3.2 only. For Unicode 4.0 and above title boundary iteration,
  please use Word Boundary iterator.<code>getWordInstance</code>
 @param where A Locale specifying the language of the text being analyzed.
 @return A new instance of BreakIterator that locates title boundaries.
 @throw NullPointerExceptionif <code>where</code> is null.
 */
+ (AndroidIcuTextBreakIterator *)getTitleInstanceWithAndroidIcuUtilULocale:(AndroidIcuUtilULocale *)where;

/*!
 @brief Returns a new instance of BreakIterator that locates word boundaries.
 This function assumes that the text being analyzed is in the default
  locale's language.
 @return An instance of BreakIterator that locates word boundaries.
 */
+ (AndroidIcuTextBreakIterator *)getWordInstance;

/*!
 @brief Returns a new instance of BreakIterator that locates word boundaries.
 @param where A locale specifying the language of the text to be  analyzed.
 @return An instance of BreakIterator that locates word boundaries.
 @throw NullPointerExceptionif <code>where</code> is null.
 */
+ (AndroidIcuTextBreakIterator *)getWordInstanceWithJavaUtilLocale:(JavaUtilLocale *)where;

/*!
 @brief <strong>[icu]</strong> Returns a new instance of BreakIterator that locates word boundaries.
 @param where A locale specifying the language of the text to be  analyzed.
 @return An instance of BreakIterator that locates word boundaries.
 @throw NullPointerExceptionif <code>where</code> is null.
 */
+ (AndroidIcuTextBreakIterator *)getWordInstanceWithAndroidIcuUtilULocale:(AndroidIcuUtilULocale *)where;

/*!
 @brief Return true if the specified position is a boundary position.If the
  function returns true, the current iteration position is set to the
  specified position; if the function returns false, the current
  iteration position is set as though following() had been called.
 @param offset the offset to check.
 @return True if "offset" is a boundary position.
 */
- (jboolean)isBoundaryWithInt:(jint)offset;

/*!
 @brief Set the iterator to the last boundary position.This is always the "past-the-end"
  index of the text this iterator iterates over.
 For example, if the
  iterator iterates over a whole string (call it "text"), this function
  will always return text.length().
 @return The character offset of the end of the stretch of text
  being broken.
 */
- (jint)last;

/*!
 @brief Advances the iterator forward one boundary.The current iteration
  position is updated to point to the next boundary position after the
  current position, and this is also the value that is returned.
 If
  the current position is equal to the value returned by last(), or to
  DONE, this function returns DONE and sets the current position to
  DONE.
 @return The position of the first boundary position following the
  iteration position.
 */
- (jint)next;

/*!
 @brief Move the iterator by the specified number of steps in the text.
 A positive number moves the iterator forward; a negative number
  moves the iterator backwards. If this causes the iterator
  to move off either end of the text, this function returns DONE;
  otherwise, this function returns the position of the appropriate
  boundary.  Calling this function is equivalent to calling next() or
  previous() n times.
 @param n The number of boundaries to advance over (if positive, moves  forward; if negative, moves backwards).
 @return The position of the boundary n boundaries from the current
  iteration position, or DONE if moving n boundaries causes the iterator
  to advance off either end of the text.
 */
- (jint)nextWithInt:(jint)n;

/*!
 @brief Sets the iterator's current iteration position to be the last
  boundary position preceding the specified position.
 (Whether the
  specified position is itself a boundary position or not doesn't
  matter-- this function always moves the iteration position to the
  last boundary before the specified position.)  If the specified
  position is the starting position, returns DONE.
 @param offset The character position to start searching from.
 @return The position of the last boundary position preceding
  "offset" (whether of not "offset" itself is a boundary position),
  or DONE if "offset" is the starting offset of the iterator.
 */
- (jint)precedingWithInt:(jint)offset;

/*!
 @brief Move the iterator backward one boundary.The current iteration
  position is updated to point to the last boundary position before
  the current position, and this is also the value that is returned.
 If
  the current position is equal to the value returned by first(), or to
  DONE, this function returns DONE and sets the current position to
  DONE.
 @return The position of the last boundary position preceding the
  iteration position.
 */
- (jint)previous;

/*!
 @brief <strong>[icu]</strong> Registers a new break iterator of the indicated kind, to use in the given
  locale.Clones of the iterator will be returned if a request for a break iterator
  of the given kind matches or falls back to this locale.
 <p>Because ICU may choose to cache BreakIterator objects internally, this must
  be called at application startup, prior to any calls to
  BreakIterator.getInstance to avoid undefined behavior.
 @param iter the BreakIterator instance to adopt.
 @param locale the Locale for which this instance is to be registered
 @param kind the type of iterator for which this instance is to be registered
 @return a registry key that can be used to unregister this instance
 */
+ (id)registerInstanceWithAndroidIcuTextBreakIterator:(AndroidIcuTextBreakIterator *)iter
                                   withJavaUtilLocale:(JavaUtilLocale *)locale
                                              withInt:(jint)kind;

/*!
 @brief <strong>[icu]</strong> Registers a new break iterator of the indicated kind, to use in the given
  locale.Clones of the iterator will be returned if a request for a break iterator
  of the given kind matches or falls back to this locale.
 <p>Because ICU may choose to cache BreakIterator objects internally, this must
  be called at application startup, prior to any calls to
  BreakIterator.getInstance to avoid undefined behavior.
 @param iter the BreakIterator instance to adopt.
 @param locale the Locale for which this instance is to be registered
 @param kind the type of iterator for which this instance is to be registered
 @return a registry key that can be used to unregister this instance
 */
+ (id)registerInstanceWithAndroidIcuTextBreakIterator:(AndroidIcuTextBreakIterator *)iter
                            withAndroidIcuUtilULocale:(AndroidIcuUtilULocale *)locale
                                              withInt:(jint)kind;

/*!
 @brief Sets the iterator to analyze a new piece of text.The
  BreakIterator is passed a CharacterIterator through which
  it will access the text itself.
 The current iteration
  position is reset to the CharacterIterator's start index.
  (The old iterator is dropped.)
 @param newText A CharacterIterator referring to the text  to analyze with this BreakIterator (the iterator's current
   position is ignored, but its other state is significant).
 */
- (void)setTextWithJavaTextCharacterIterator:(id<JavaTextCharacterIterator>)newText;

/*!
 @brief Sets the iterator to analyze a new piece of text.The new
  piece of text is passed in as a CharSequence, and the current
  iteration position is reset to the beginning of the text.
 (The old text is dropped.)
 @param newText A CharSequence containing the text to analyze with  this BreakIterator.
 */
- (void)setTextWithJavaLangCharSequence:(id<JavaLangCharSequence>)newText;

/*!
 @brief Sets the iterator to analyze a new piece of text.The new
  piece of text is passed in as a String, and the current
  iteration position is reset to the beginning of the string.
 (The old text is dropped.)
 @param newText A String containing the text to analyze with  this BreakIterator.
 */
- (void)setTextWithNSString:(NSString *)newText;

/*!
 @brief <strong>[icu]</strong> Unregisters a previously-registered BreakIterator using the key returned
  from the register call.Key becomes invalid after this call and should not be used
  again.
 @param key the registry key returned by a previous call to registerInstance
 @return true if the iterator for the key was successfully unregistered
 */
+ (jboolean)unregisterWithId:(id)key;

#pragma mark Protected

/*!
 @brief Default constructor.There is no state that is carried by this abstract
  base class.
 */
- (instancetype __nonnull)init;

#pragma mark Package-Private

/*!
 @brief Set information about the locales that were used to create this
  object.If the object was not constructed from locale data,
  both arguments should be set to null.
 Otherwise, neither
  should be null.  The actual locale must be at the same level or
  less specific than the valid locale.  This method is intended
  for use by factories or other entities that create objects of
  this class.
 @param valid the most specific locale containing any resource  data, or null
 @param actual the locale containing data used to construct this  object, or null
 - seealso: android.icu.util.ULocale
 - seealso: android.icu.util.ULocale#VALID_LOCALE
 - seealso: android.icu.util.ULocale#ACTUAL_LOCALE
 */
- (void)setLocaleWithAndroidIcuUtilULocale:(AndroidIcuUtilULocale *)valid
                 withAndroidIcuUtilULocale:(AndroidIcuUtilULocale *)actual;

@end

J2OBJC_STATIC_INIT(AndroidIcuTextBreakIterator)

/*!
 @brief DONE is returned by previous() and next() after all valid
  boundaries have been returned.
 */
inline jint AndroidIcuTextBreakIterator_get_DONE(void);
#define AndroidIcuTextBreakIterator_DONE -1
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuTextBreakIterator, DONE, jint)

/*!
 @brief Tag value for "words" that do not fit into any of other categories.
 Includes spaces and most punctuation.
 */
inline jint AndroidIcuTextBreakIterator_get_WORD_NONE(void);
#define AndroidIcuTextBreakIterator_WORD_NONE 0
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuTextBreakIterator, WORD_NONE, jint)

/*!
 @brief Upper bound for tags for uncategorized words.
 */
inline jint AndroidIcuTextBreakIterator_get_WORD_NONE_LIMIT(void);
#define AndroidIcuTextBreakIterator_WORD_NONE_LIMIT 100
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuTextBreakIterator, WORD_NONE_LIMIT, jint)

/*!
 @brief Tag value for words that appear to be numbers, lower limit.
 */
inline jint AndroidIcuTextBreakIterator_get_WORD_NUMBER(void);
#define AndroidIcuTextBreakIterator_WORD_NUMBER 100
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuTextBreakIterator, WORD_NUMBER, jint)

/*!
 @brief Tag value for words that appear to be numbers, upper limit.
 */
inline jint AndroidIcuTextBreakIterator_get_WORD_NUMBER_LIMIT(void);
#define AndroidIcuTextBreakIterator_WORD_NUMBER_LIMIT 200
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuTextBreakIterator, WORD_NUMBER_LIMIT, jint)

/*!
 @brief Tag value for words that contain letters, excluding
  hiragana, katakana or ideographic characters, lower limit.
 */
inline jint AndroidIcuTextBreakIterator_get_WORD_LETTER(void);
#define AndroidIcuTextBreakIterator_WORD_LETTER 200
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuTextBreakIterator, WORD_LETTER, jint)

/*!
 @brief Tag value for words containing letters, upper limit
 */
inline jint AndroidIcuTextBreakIterator_get_WORD_LETTER_LIMIT(void);
#define AndroidIcuTextBreakIterator_WORD_LETTER_LIMIT 300
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuTextBreakIterator, WORD_LETTER_LIMIT, jint)

/*!
 @brief Tag value for words containing kana characters, lower limit
 */
inline jint AndroidIcuTextBreakIterator_get_WORD_KANA(void);
#define AndroidIcuTextBreakIterator_WORD_KANA 300
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuTextBreakIterator, WORD_KANA, jint)

/*!
 @brief Tag value for words containing kana characters, upper limit
 */
inline jint AndroidIcuTextBreakIterator_get_WORD_KANA_LIMIT(void);
#define AndroidIcuTextBreakIterator_WORD_KANA_LIMIT 400
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuTextBreakIterator, WORD_KANA_LIMIT, jint)

/*!
 @brief Tag value for words containing ideographic characters, lower limit
 */
inline jint AndroidIcuTextBreakIterator_get_WORD_IDEO(void);
#define AndroidIcuTextBreakIterator_WORD_IDEO 400
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuTextBreakIterator, WORD_IDEO, jint)

/*!
 @brief Tag value for words containing ideographic characters, upper limit
 */
inline jint AndroidIcuTextBreakIterator_get_WORD_IDEO_LIMIT(void);
#define AndroidIcuTextBreakIterator_WORD_IDEO_LIMIT 500
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuTextBreakIterator, WORD_IDEO_LIMIT, jint)

/*!
 @brief <strong>[icu]</strong>
 */
inline jint AndroidIcuTextBreakIterator_get_KIND_CHARACTER(void);
#define AndroidIcuTextBreakIterator_KIND_CHARACTER 0
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuTextBreakIterator, KIND_CHARACTER, jint)

/*!
 @brief <strong>[icu]</strong>
 */
inline jint AndroidIcuTextBreakIterator_get_KIND_WORD(void);
#define AndroidIcuTextBreakIterator_KIND_WORD 1
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuTextBreakIterator, KIND_WORD, jint)

/*!
 @brief <strong>[icu]</strong>
 */
inline jint AndroidIcuTextBreakIterator_get_KIND_LINE(void);
#define AndroidIcuTextBreakIterator_KIND_LINE 2
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuTextBreakIterator, KIND_LINE, jint)

/*!
 @brief <strong>[icu]</strong>
 */
inline jint AndroidIcuTextBreakIterator_get_KIND_SENTENCE(void);
#define AndroidIcuTextBreakIterator_KIND_SENTENCE 3
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuTextBreakIterator, KIND_SENTENCE, jint)

/*!
 @brief <strong>[icu]</strong>
 */
inline jint AndroidIcuTextBreakIterator_get_KIND_TITLE(void);
#define AndroidIcuTextBreakIterator_KIND_TITLE 4
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuTextBreakIterator, KIND_TITLE, jint)

FOUNDATION_EXPORT void AndroidIcuTextBreakIterator_init(AndroidIcuTextBreakIterator *self);

FOUNDATION_EXPORT AndroidIcuTextBreakIterator *AndroidIcuTextBreakIterator_getWordInstance(void);

FOUNDATION_EXPORT AndroidIcuTextBreakIterator *AndroidIcuTextBreakIterator_getWordInstanceWithJavaUtilLocale_(JavaUtilLocale *where);

FOUNDATION_EXPORT AndroidIcuTextBreakIterator *AndroidIcuTextBreakIterator_getWordInstanceWithAndroidIcuUtilULocale_(AndroidIcuUtilULocale *where);

FOUNDATION_EXPORT AndroidIcuTextBreakIterator *AndroidIcuTextBreakIterator_getLineInstance(void);

FOUNDATION_EXPORT AndroidIcuTextBreakIterator *AndroidIcuTextBreakIterator_getLineInstanceWithJavaUtilLocale_(JavaUtilLocale *where);

FOUNDATION_EXPORT AndroidIcuTextBreakIterator *AndroidIcuTextBreakIterator_getLineInstanceWithAndroidIcuUtilULocale_(AndroidIcuUtilULocale *where);

FOUNDATION_EXPORT AndroidIcuTextBreakIterator *AndroidIcuTextBreakIterator_getCharacterInstance(void);

FOUNDATION_EXPORT AndroidIcuTextBreakIterator *AndroidIcuTextBreakIterator_getCharacterInstanceWithJavaUtilLocale_(JavaUtilLocale *where);

FOUNDATION_EXPORT AndroidIcuTextBreakIterator *AndroidIcuTextBreakIterator_getCharacterInstanceWithAndroidIcuUtilULocale_(AndroidIcuUtilULocale *where);

FOUNDATION_EXPORT AndroidIcuTextBreakIterator *AndroidIcuTextBreakIterator_getSentenceInstance(void);

FOUNDATION_EXPORT AndroidIcuTextBreakIterator *AndroidIcuTextBreakIterator_getSentenceInstanceWithJavaUtilLocale_(JavaUtilLocale *where);

FOUNDATION_EXPORT AndroidIcuTextBreakIterator *AndroidIcuTextBreakIterator_getSentenceInstanceWithAndroidIcuUtilULocale_(AndroidIcuUtilULocale *where);

FOUNDATION_EXPORT AndroidIcuTextBreakIterator *AndroidIcuTextBreakIterator_getTitleInstance(void);

FOUNDATION_EXPORT AndroidIcuTextBreakIterator *AndroidIcuTextBreakIterator_getTitleInstanceWithJavaUtilLocale_(JavaUtilLocale *where);

FOUNDATION_EXPORT AndroidIcuTextBreakIterator *AndroidIcuTextBreakIterator_getTitleInstanceWithAndroidIcuUtilULocale_(AndroidIcuUtilULocale *where);

FOUNDATION_EXPORT id AndroidIcuTextBreakIterator_registerInstanceWithAndroidIcuTextBreakIterator_withJavaUtilLocale_withInt_(AndroidIcuTextBreakIterator *iter, JavaUtilLocale *locale, jint kind);

FOUNDATION_EXPORT id AndroidIcuTextBreakIterator_registerInstanceWithAndroidIcuTextBreakIterator_withAndroidIcuUtilULocale_withInt_(AndroidIcuTextBreakIterator *iter, AndroidIcuUtilULocale *locale, jint kind);

FOUNDATION_EXPORT jboolean AndroidIcuTextBreakIterator_unregisterWithId_(id key);

FOUNDATION_EXPORT AndroidIcuTextBreakIterator *AndroidIcuTextBreakIterator_getBreakInstanceWithAndroidIcuUtilULocale_withInt_(AndroidIcuUtilULocale *where, jint kind);

FOUNDATION_EXPORT IOSObjectArray *AndroidIcuTextBreakIterator_getAvailableLocales(void);

FOUNDATION_EXPORT IOSObjectArray *AndroidIcuTextBreakIterator_getAvailableULocales(void);

J2OBJC_TYPE_LITERAL_HEADER(AndroidIcuTextBreakIterator)

#endif

#if !defined (AndroidIcuTextBreakIterator_BreakIteratorServiceShim_) && (INCLUDE_ALL_AndroidIcuTextBreakIterator || defined(INCLUDE_AndroidIcuTextBreakIterator_BreakIteratorServiceShim))
#define AndroidIcuTextBreakIterator_BreakIteratorServiceShim_

@class AndroidIcuTextBreakIterator;
@class AndroidIcuUtilULocale;
@class IOSObjectArray;

@interface AndroidIcuTextBreakIterator_BreakIteratorServiceShim : NSObject

#pragma mark Public

- (AndroidIcuTextBreakIterator *)createBreakIteratorWithAndroidIcuUtilULocale:(AndroidIcuUtilULocale *)l
                                                                      withInt:(jint)k;

- (IOSObjectArray *)getAvailableLocales;

- (IOSObjectArray *)getAvailableULocales;

- (id)registerInstanceWithAndroidIcuTextBreakIterator:(AndroidIcuTextBreakIterator *)iter
                            withAndroidIcuUtilULocale:(AndroidIcuUtilULocale *)l
                                              withInt:(jint)k;

- (jboolean)unregisterWithId:(id)key;

#pragma mark Package-Private

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidIcuTextBreakIterator_BreakIteratorServiceShim)

FOUNDATION_EXPORT void AndroidIcuTextBreakIterator_BreakIteratorServiceShim_init(AndroidIcuTextBreakIterator_BreakIteratorServiceShim *self);

J2OBJC_TYPE_LITERAL_HEADER(AndroidIcuTextBreakIterator_BreakIteratorServiceShim)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_AndroidIcuTextBreakIterator")
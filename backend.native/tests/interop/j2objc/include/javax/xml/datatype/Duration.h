//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/javax/xml/datatype/Duration.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxXmlDatatypeDuration")
#ifdef RESTRICT_JavaxXmlDatatypeDuration
#define INCLUDE_ALL_JavaxXmlDatatypeDuration 0
#else
#define INCLUDE_ALL_JavaxXmlDatatypeDuration 1
#endif
#undef RESTRICT_JavaxXmlDatatypeDuration

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxXmlDatatypeDuration_) && (INCLUDE_ALL_JavaxXmlDatatypeDuration || defined(INCLUDE_JavaxXmlDatatypeDuration))
#define JavaxXmlDatatypeDuration_

@class JavaMathBigDecimal;
@class JavaUtilCalendar;
@class JavaUtilDate;
@class JavaxXmlDatatypeDatatypeConstants_Field;
@class JavaxXmlNamespaceQName;

/*!
 @brief <p>Immutable representation of a time span as defined in
  the W3C XML Schema 1.0 specification.
 </p>
  
 <p>A Duration object represents a period of Gregorian time,
  which consists of six fields (years, months, days, hours,
  minutes, and seconds) plus a sign (+/-) field.</p>
  
 <p>The first five fields have non-negative (>=0) integers or null
  (which represents that the field is not set),
  and the seconds field has a non-negative decimal or null.
  A negative sign indicates a negative duration.</p>
  
 <p>This class provides a number of methods that make it easy
  to use for the duration datatype of XML Schema 1.0 with
  the errata.</p>
  
 <h2>Order relationship</h2>
  <p>Duration objects only have partial order, where two values A and B
  maybe either:</p>
  <ol>
   <li>A&lt;B (A is shorter than B)
   <li>A&gt;B (A is longer than B)
   <li>A==B   (A and B are of the same duration)  
 <li>A&lt;>B (Comparison between A and B is indeterminate) 
 </ol>
  
 <p>For example, 30 days cannot be meaningfully compared to one month.
  The <code>compare(Duration duration)</code> method implements this
  relationship.</p>
  
 <p>See the <code>isLongerThan(Duration)</code> method for details about
  the order relationship among <code>Duration</code> objects.</p>
  
 <h2>Operations over Duration</h2>
  <p>This class provides a set of basic arithmetic operations, such
  as addition, subtraction and multiplication.
  Because durations don't have total order, an operation could
  fail for some combinations of operations. For example, you cannot
  subtract 15 days from 1 month. See the javadoc of those methods
  for detailed conditions where this could happen.</p>
  
 <p>Also, division of a duration by a number is not provided because
  the <code>Duration</code> class can only deal with finite precision
  decimal numbers. For example, one cannot represent 1 sec divided by 3.</p>
  
 <p>However, you could substitute a division by 3 with multiplying
  by numbers such as 0.3 or 0.333.</p>
  
 <h2>Range of allowed values</h2>
  <p>
  Because some operations of <code>Duration</code> rely on <code>Calendar</code>
  even though <code>Duration</code> can hold very large or very small values,
  some of the methods may not work correctly on such <code>Duration</code>s.
  The impacted methods document their dependency on <code>Calendar</code>.
 @author <a href="mailto:Joseph.Fialli@@Sun.COM">Joseph Fialli</a>
 @author <a href="mailto:Kohsuke.Kawaguchi@@Sun.com">Kohsuke Kawaguchi</a>
 @author <a href="mailto:Jeff.Suttor@@Sun.com">Jeff Suttor</a>
 @version $Revision: 759828 $, $Date: 2009-03-29 18:26:29 -0700 (Sun, 29 Mar 2009) $
 - seealso: XMLGregorianCalendar#add(Duration)
 @since 1.5
 */
@interface JavaxXmlDatatypeDuration : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief <p>Computes a new duration whose value is <code>this+rhs</code>.
 </p>
  
 <p>For example,</p>
  @code

  "1 day" + "-3 days" = "-2 days"
  "1 year" + "1 day" = "1 year and 1 day"
  "-(1 hour,50 minutes)" + "-20 minutes" = "-(1 hours,70 minutes)"
  "15 hours" + "-3 days" = "-(2 days,9 hours)"
  "1 year" + "-1 day" = IllegalStateException 
  
@endcode
  
 <p>Since there's no way to meaningfully subtract 1 day from 1 month,
  there are cases where the operation fails in 
 <code>IllegalStateException</code>.</p>
  
 <p>
  Formally, the computation is defined as follows.</p>
  <p>
  Firstly, we can assume that two <code>Duration</code>s to be added
  are both positive without losing generality (i.e., 
 <code>(-X)+Y=Y-X</code>, <code>X+(-Y)=X-Y</code>,
  <code>(-X)+(-Y)=-(X+Y)</code>)
  
 <p>
  Addition of two positive <code>Duration</code>s are simply defined as
  field by field addition where missing fields are treated as 0. 
 <p>
  A field of the resulting <code>Duration</code> will be unset if and
  only if respective fields of two input <code>Duration</code>s are unset. 
 <p>
  Note that <code>lhs.add(rhs)</code> will be always successful if 
 <code>lhs.signum()*rhs.signum()!=-1</code> or both of them are
  normalized.</p>
 @param rhs <code> Duration </code>  to add to this  <code> Duration </code>
 @return non-null valid Duration object.
 @throw NullPointerException
 If the rhs parameter is null.
 @throw IllegalStateException
 If two durations cannot be meaningfully added. For
       example, adding negative one day to one month causes
       this exception.
 - seealso: #subtract(Duration)
 */
- (JavaxXmlDatatypeDuration *)addWithJavaxXmlDatatypeDuration:(JavaxXmlDatatypeDuration *)rhs;

/*!
 @brief Adds this duration to a <code>Calendar</code> object.
 <p>
  Calls <code>java.util.Calendar.add(int,int)</code> in the
  order of YEARS, MONTHS, DAYS, HOURS, MINUTES, SECONDS, and MILLISECONDS
  if those fields are present. Because the <code>Calendar</code> class
  uses int to hold values, there are cases where this method
  won't work correctly (for example if values of fields
  exceed the range of int.) 
 </p>
  
 <p>
  Also, since this duration class is a Gregorian duration, this
  method will not work correctly if the given <code>Calendar</code>
  object is based on some other calendar systems. 
 </p>
  
 <p>
  Any fractional parts of this <code>Duration</code> object
  beyond milliseconds will be simply ignored. For example, if
  this duration is "P1.23456S", then 1 is added to SECONDS,
  234 is added to MILLISECONDS, and the rest will be unused. 
 </p>
  
 <p>
  Note that because <code>Calendar.add(int, int)</code> is using 
 <tt>int</tt>, <code>Duration</code> with values beyond the
  range of <tt>int</tt> in its fields
  will cause overflow/underflow to the given <code>Calendar</code>.
  <code>XMLGregorianCalendar.add(Duration)</code> provides the same
  basic operation as this method while avoiding
  the overflow/underflow issues.
 @param calendar A calendar object whose value will be modified.
 @throw NullPointerException
 if the calendar parameter is null.
 */
- (void)addToWithJavaUtilCalendar:(JavaUtilCalendar *)calendar;

/*!
 @brief Adds this duration to a <code>Date</code> object.
 <p>
  The given date is first converted into
  a <code>java.util.GregorianCalendar</code>, then the duration
  is added exactly like the <code>addTo(Calendar)</code> method. 
 <p>
  The updated time instant is then converted back into a 
 <code>Date</code> object and used to update the given <code>Date</code> object. 
 <p>
  This somewhat redundant computation is necessary to unambiguously
  determine the duration of months and years.
 @param date A date object whose value will be modified.
 @throw NullPointerException
 if the date parameter is null.
 */
- (void)addToWithJavaUtilDate:(JavaUtilDate *)date;

/*!
 @brief <p>Partial order relation comparison with this <code>Duration</code> instance.
 </p>
  
 <p>Comparison result must be in accordance with 
 <a href="http://www.w3.org/TR/xmlschema-2/#duration-order">W3C XML Schema 1.0 Part 2, Section 3.2.7.6.2, 
 <i>Order relation on duration</i></a>.</p>
  
 <p>Return:</p>
  <ul>
    <li><code>DatatypeConstants.LESSER</code> if this <code>Duration</code> is shorter than <code>duration</code> parameter</li>
    <li><code>DatatypeConstants.EQUAL</code> if this <code>Duration</code> is equal to <code>duration</code> parameter</li>
    <li><code>DatatypeConstants.GREATER</code> if this <code>Duration</code> is longer than <code>duration</code> parameter</li>
    <li><code>DatatypeConstants.INDETERMINATE</code> if a conclusive partial order relation cannot be determined</li>
  </ul>
 @param duration to compare
 @return the relationship between <code>this</code> <code>Duration</code>and <code>duration</code> parameter as
    <code>DatatypeConstants.LESSER</code>, <code>DatatypeConstants.EQUAL</code>, <code>DatatypeConstants.GREATER</code>
    or <code>DatatypeConstants.INDETERMINATE</code>.
 @throw UnsupportedOperationExceptionIf the underlying implementation
    cannot reasonably process the request, e.g. W3C XML Schema allows for
    arbitrarily large/small/precise values, the request may be beyond the
    implementations capability.
 @throw NullPointerExceptionif <code>duration</code> is <code>null</code>.
 - seealso: #isShorterThan(Duration)
 - seealso: #isLongerThan(Duration)
 */
- (jint)compareWithJavaxXmlDatatypeDuration:(JavaxXmlDatatypeDuration *)duration;

/*!
 @brief <p>Checks if this duration object has the same duration
  as another <code>Duration</code> object.
 </p>
  
 <p>For example, "P1D" (1 day) is equal to "PT24H" (24 hours).</p>
  
 <p>Duration X is equal to Y if and only if time instant
  t+X and t+Y are the same for all the test time instants
  specified in the section 3.2.6.2 of the XML Schema 1.0
  specification.</p>
  
 <p>Note that there are cases where two <code>Duration</code>s are
  "incomparable" to each other, like one month and 30 days.
  For example,</p>
  @code

  !new Duration("P1M").isShorterThan(new Duration("P30D"))
  !new Duration("P1M").isLongerThan(new Duration("P30D"))
  !new Duration("P1M").equals(new Duration("P30D")) 
  
@endcode
 @param duration A non-null valid 
  <code> Duration </code>  object.
 @return <code>true</code> if this duration is the same length as
          <code>duration</code>.
       <code>false</code> if <code>duration</code> is not a
          <code>Duration</code> object, is <code>null</code>,
          or its length is different from this duration.
 @throw UnsupportedOperationExceptionIf the underlying implementation
    cannot reasonably process the request, e.g. W3C XML Schema allows for
    arbitrarily large/small/precise values, the request may be beyond the
    implementations capability.
 - seealso: #compare(Duration duration)
 */
- (jboolean)isEqual:(id)duration;

/*!
 @brief Obtains the value of the DAYS field as an integer value,
  or 0 if not present.
 This method works just like <code>getYears()</code> except
  that this method works on the DAYS field.
 @return Days of this <code>Duration</code>.
 */
- (jint)getDays;

/*!
 @brief Gets the value of a field.
 Fields of a duration object may contain arbitrary large value.
  Therefore this method is designed to return a <code>Number</code> object.
  In case of YEARS, MONTHS, DAYS, HOURS, and MINUTES, the returned
  number will be a non-negative integer. In case of seconds,
  the returned number may be a non-negative decimal value.
 @param field one of the six Field constants (YEARS,MONTHS,DAYS,HOURS,
        MINUTES, or SECONDS.)
 @return If the specified field is present, this method returns
       a non-null non-negative <code>Number</code> object that
       represents its value. If it is not present, return null.
       For YEARS, MONTHS, DAYS, HOURS, and MINUTES, this method
       returns a <code>java.math.BigInteger</code> object. For SECONDS, this
       method returns a <code>java.math.BigDecimal</code>.
 @throw NullPointerExceptionIf the <code>field</code> is <code>null</code>.
 */
- (NSNumber *)getFieldWithJavaxXmlDatatypeDatatypeConstants_Field:(JavaxXmlDatatypeDatatypeConstants_Field *)field;

/*!
 @brief Obtains the value of the HOURS field as an integer value,
  or 0 if not present.
 This method works just like <code>getYears()</code> except
  that this method works on the HOURS field.
 @return Hours of this <code>Duration</code>.
 */
- (jint)getHours;

/*!
 @brief Obtains the value of the MINUTES field as an integer value,
  or 0 if not present.
 This method works just like <code>getYears()</code> except
  that this method works on the MINUTES field.
 @return Minutes of this <code>Duration</code>.
 */
- (jint)getMinutes;

/*!
 @brief Obtains the value of the MONTHS field as an integer value,
  or 0 if not present.
 This method works just like <code>getYears()</code> except
  that this method works on the MONTHS field.
 @return Months of this <code>Duration</code>.
 */
- (jint)getMonths;

/*!
 @brief Obtains the value of the SECONDS field as an integer value,
  or 0 if not present.
 This method works just like <code>getYears()</code> except
  that this method works on the SECONDS field.
 @return seconds in the integer value. The fraction of seconds
    will be discarded (for example, if the actual value is 2.5,
    this method returns 2)
 */
- (jint)getSeconds;

/*!
 @brief Returns the sign of this duration in -1,0, or 1.
 @return -1 if this duration is negative, 0 if the duration is zero,
       and 1 if the duration is positive.
 */
- (jint)getSign;

/*!
 @brief <p>Returns the length of the duration in milliseconds.
 </p>
  
 <p>If the seconds field carries more digits than millisecond order,
  those will be simply discarded (or in other words, rounded to zero.)
  For example, for any Calendar value <code>x</code>,</p>
  @code

   <code>new Duration("PT10.00099S").getTimeInMills(x) == 10000</code>.
   <code>new Duration("-PT10.00099S").getTimeInMills(x) == -10000</code>.
   
@endcode
  
 <p>
  Note that this method uses the <code>addTo(Calendar)</code> method,
  which may work incorrectly with <code>Duration</code> objects with
  very large values in its fields. See the <code>addTo(Calendar)</code>
  method for details.
 @param startInstant The length of a month/year varies. The 
  <code> startInstant </code>  is       used to disambiguate this variance. Specifically, this method
        returns the difference between 
  <code> startInstant </code>  and        <code> startInstant+duration
  </code>
 @return milliseconds between <code>startInstant</code> and
    <code>startInstant</code> plus this <code>Duration</code>
 @throw NullPointerExceptionif <code>startInstant</code> parameter
  is null.
 */
- (jlong)getTimeInMillisWithJavaUtilCalendar:(JavaUtilCalendar *)startInstant;

/*!
 @brief <p>Returns the length of the duration in milliseconds.
 </p>
  
 <p>If the seconds field carries more digits than millisecond order,
  those will be simply discarded (or in other words, rounded to zero.)
  For example, for any <code>Date</code> value <code>x</code>,</p>
  @code

   <code>new Duration("PT10.00099S").getTimeInMills(x) == 10000</code>.
   <code>new Duration("-PT10.00099S").getTimeInMills(x) == -10000</code>.
   
@endcode
  
 <p>
  Note that this method uses the <code>addTo(Date)</code> method,
  which may work incorrectly with <code>Duration</code> objects with
  very large values in its fields. See the <code>addTo(Date)</code>
  method for details.
 @param startInstant The length of a month/year varies. The 
  <code> startInstant </code>  is       used to disambiguate this variance. Specifically, this method
        returns the difference between 
  <code> startInstant </code>  and        <code> startInstant+duration
  </code> .
 @throw NullPointerException
 If the startInstant parameter is null.
 @return milliseconds between <code>startInstant</code> and
    <code>startInstant</code> plus this <code>Duration</code>
 - seealso: #getTimeInMillis(Calendar)
 */
- (jlong)getTimeInMillisWithJavaUtilDate:(JavaUtilDate *)startInstant;

/*!
 @brief <p>Return the name of the XML Schema date/time type that this instance
  maps to.
 Type is computed based on fields that are set,
  i.e. <code>isSet(DatatypeConstants.Field field)</code> == <code>true</code>.</p>
  
 <table border="2" rules="all" cellpadding="2">
    <thead>
      <tr>
        <th align="center" colspan="7">
          Required fields for XML Schema 1.0 Date/Time Datatypes.<br>
          <i>(timezone is optional for all date/time datatypes)</i>
        </th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td>Datatype</td>
        <td>year</td>
        <td>month</td>
        <td>day</td>
        <td>hour</td>
        <td>minute</td>
        <td>second</td>
      </tr>
      <tr>
        <td><code>DatatypeConstants.DURATION</code></td>
        <td>X</td>
        <td>X</td>
        <td>X</td>
        <td>X</td>
        <td>X</td>
        <td>X</td>
      </tr>
      <tr>
        <td><code>DatatypeConstants.DURATION_DAYTIME</code></td>
        <td></td>
        <td></td>
        <td>X</td>
        <td>X</td>
        <td>X</td>
        <td>X</td>
      </tr>
      <tr>
        <td><code>DatatypeConstants.DURATION_YEARMONTH</code></td>
        <td>X</td>
        <td>X</td>
        <td></td>
        <td></td>
        <td></td>
        <td></td>
      </tr>
    </tbody>
  </table>
 @return one of the following constants:
    <code>DatatypeConstants.DURATION</code>,
    <code>DatatypeConstants.DURATION_DAYTIME</code> or
    <code>DatatypeConstants.DURATION_YEARMONTH</code>.
 @throw IllegalStateExceptionIf the combination of set fields does not match one of the XML Schema date/time datatypes.
 */
- (JavaxXmlNamespaceQName *)getXMLSchemaType;

/*!
 @brief <p>Get the years value of this <code>Duration</code> as an <code>int</code> or <code>0</code> if not present.
 </p>
  
 <p><code>getYears()</code> is a convenience method for 
 <code>getField(DatatypeConstants.YEARS)</code>.</p>
  
 <p>As the return value is an <code>int</code>, an incorrect value will be returned for <code>Duration</code>s
  with years that go beyond the range of an <code>int</code>.
  Use <code>getField(DatatypeConstants.YEARS)</code> to avoid possible loss of precision.</p>
 @return If the years field is present, return its value as an <code>int</code>, else return <code>0</code>.
 */
- (jint)getYears;

/*!
 @brief Returns a hash code consistent with the definition of the equals method.
 - seealso: Object#hashCode()
 */
- (NSUInteger)hash;

/*!
 @brief <p>Checks if this duration object is strictly longer than
  another <code>Duration</code> object.
 </p>
  
 <p>Duration X is "longer" than Y if and only if X>Y
  as defined in the section 3.2.6.2 of the XML Schema 1.0
  specification.</p>
  
 <p>For example, "P1D" (one day) > "PT12H" (12 hours) and
  "P2Y" (two years) > "P23M" (23 months).</p>
 @param duration <code> Duration </code>  to test this  <code> Duration </code>  against.
 @throw UnsupportedOperationExceptionIf the underlying implementation
    cannot reasonably process the request, e.g. W3C XML Schema allows for
    arbitrarily large/small/precise values, the request may be beyond the
    implementations capability.
 @throw NullPointerExceptionIf <code>duration</code> is null.
 @return true if the duration represented by this object
       is longer than the given duration. false otherwise.
 - seealso: #isShorterThan(Duration)
 - seealso: #compare(Duration duration)
 */
- (jboolean)isLongerThanWithJavaxXmlDatatypeDuration:(JavaxXmlDatatypeDuration *)duration;

/*!
 @brief Checks if a field is set.
 A field of a duration object may or may not be present.
  This method can be used to test if a field is present.
 @param field one of the six Field constants (YEARS,MONTHS,DAYS,HOURS,
        MINUTES, or SECONDS.)
 @return true if the field is present. false if not.
 @throw NullPointerException
 If the field parameter is null.
 */
- (jboolean)isSetWithJavaxXmlDatatypeDatatypeConstants_Field:(JavaxXmlDatatypeDatatypeConstants_Field *)field;

/*!
 @brief <p>Checks if this duration object is strictly shorter than
  another <code>Duration</code> object.
 </p>
 @param duration <code> Duration </code>  to test this  <code> Duration </code>  against.
 @return <code>true</code> if <code>duration</code> parameter is shorter than this <code>Duration</code>,
    else <code>false</code>.
 @throw UnsupportedOperationExceptionIf the underlying implementation
    cannot reasonably process the request, e.g. W3C XML Schema allows for
    arbitrarily large/small/precise values, the request may be beyond the
    implementations capability.
 @throw NullPointerExceptionif <code>duration</code> is null.
 - seealso: #isLongerThan(Duration duration)
 - seealso: #compare(Duration duration)
 */
- (jboolean)isShorterThanWithJavaxXmlDatatypeDuration:(JavaxXmlDatatypeDuration *)duration;

/*!
 @brief Computes a new duration whose value is <code>factor</code> times
  longer than the value of this duration.
 <p>
  For example, 
 @code

  "P1M" (1 month) * "12" = "P12M" (12 months)
  "PT1M" (1 min) * "0.3" = "PT18S" (18 seconds)
  "P1M" (1 month) * "1.5" = IllegalStateException 
  
@endcode
  
 <p>
  Since the <code>Duration</code> class is immutable, this method
  doesn't change the value of this object. It simply computes
  a new Duration object and returns it. 
 <p>
  The operation will be performed field by field with the precision
  of <code>BigDecimal</code>. Since all the fields except seconds are
  restricted to hold integers,
  any fraction produced by the computation will be
  carried down toward the next lower unit. For example,
  if you multiply "P1D" (1 day) with "0.5", then it will be 0.5 day,
  which will be carried down to "PT12H" (12 hours).
  When fractions of month cannot be meaningfully carried down
  to days, or year to months, this will cause an 
 <code>IllegalStateException</code> to be thrown.
  For example if you multiple one month by 0.5.</p>
  
 <p>
  To avoid <code>IllegalStateException</code>, use
  the <code>normalizeWith(Calendar)</code> method to remove the years
  and months fields.
 @param factor to multiply by
 @return returns a non-null valid <code>Duration</code> object
 @throw IllegalStateExceptionif operation produces fraction in
  the months field.
 @throw NullPointerExceptionif the <code>factor</code> parameter is 
 <code>null</code>.
 */
- (JavaxXmlDatatypeDuration *)multiplyWithJavaMathBigDecimal:(JavaMathBigDecimal *)factor;

/*!
 @brief <p>Computes a new duration whose value is <code>factor</code> times
  longer than the value of this duration.
 </p>
  
 <p>This method is provided for the convenience.
  It is functionally equivalent to the following code:</p>
  @code

  multiply(new BigDecimal(String.valueOf(factor))) 
  
@endcode
 @param factor Factor times longer of new  <code> Duration </code>  to create.
 @return New <code>Duration</code> that is <code>factor</code>times longer than this <code>Duration</code>.
 - seealso: #multiply(BigDecimal)
 */
- (JavaxXmlDatatypeDuration *)multiplyWithInt:(jint)factor;

/*!
 @brief Returns a new <code>Duration</code> object whose
  value is <code>-this</code>.
 <p>
  Since the <code>Duration</code> class is immutable, this method
  doesn't change the value of this object. It simply computes
  a new Duration object and returns it.
 @return always return a non-null valid <code>Duration</code> object.
 */
- (JavaxXmlDatatypeDuration *)negate;

/*!
 @brief <p>Converts the years and months fields into the days field
  by using a specific time instant as the reference point.
 </p>
  
 <p>For example, duration of one month normalizes to 31 days
  given the start time instance "July 8th 2003, 17:40:32".</p>
  
 <p>Formally, the computation is done as follows:</p>
  <ol>
   <li>the given Calendar object is cloned</li>
   <li>the years, months and days fields will be added to the <code>Calendar</code> object
       by using the <code>Calendar.add(int,int)</code> method</li>
   <li>the difference between the two Calendars in computed in milliseconds and converted to days,
      if a remainder occurs due to Daylight Savings Time, it is discarded</li>
   <li>the computed days, along with the hours, minutes and seconds
       fields of this duration object is used to construct a new
       Duration object.</li>
  </ol>
  
 <p>Note that since the Calendar class uses <code>int</code> to
  hold the value of year and month, this method may produce
  an unexpected result if this duration object holds
  a very large value in the years or months fields.</p>
 @param startTimeInstant <code> Calendar </code>  reference point.
 @return <code>Duration</code> of years and months of this <code>Duration</code> as days.
 @throw NullPointerExceptionIf the startTimeInstant parameter is null.
 */
- (JavaxXmlDatatypeDuration *)normalizeWithWithJavaUtilCalendar:(JavaUtilCalendar *)startTimeInstant;

/*!
 @brief <p>Computes a new duration whose value is <code>this-rhs</code>.
 </p>
  
 <p>For example:</p>
  @code

  "1 day" - "-3 days" = "4 days"
  "1 year" - "1 day" = IllegalStateException
  "-(1 hour,50 minutes)" - "-20 minutes" = "-(1hours,30 minutes)"
  "15 hours" - "-3 days" = "3 days and 15 hours"
  "1 year" - "-1 day" = "1 year and 1 day" 
  
@endcode
  
 <p>Since there's no way to meaningfully subtract 1 day from 1 month,
  there are cases where the operation fails in <code>IllegalStateException</code>.</p>
  
 <p>Formally the computation is defined as follows.
  First, we can assume that two <code>Duration</code>s are both positive
  without losing generality.  (i.e., 
 <code>(-X)-Y=-(X+Y)</code>, <code>X-(-Y)=X+Y</code>,
  <code>(-X)-(-Y)=-(X-Y)</code>)</p>
  
 <p>Then two durations are subtracted field by field.
  If the sign of any non-zero field <tt>F</tt> is different from
  the sign of the most significant field,
  1 (if <tt>F</tt> is negative) or -1 (otherwise)
  will be borrowed from the next bigger unit of <tt>F</tt>.</p>
  
 <p>This process is repeated until all the non-zero fields have
  the same sign.</p>
  
 <p>If a borrow occurs in the days field (in other words, if
  the computation needs to borrow 1 or -1 month to compensate
  days), then the computation fails by throwing an 
 <code>IllegalStateException</code>.</p>
 @param rhs <code> Duration </code>  to subtract from this  <code> Duration </code>
  .
 @return New <code>Duration</code> created from subtracting <code>rhs</code> from this <code>Duration</code>.
 @throw IllegalStateException
 If two durations cannot be meaningfully subtracted. For
       example, subtracting one day from one month causes
       this exception.
 @throw NullPointerException
 If the rhs parameter is null.
 - seealso: #add(Duration)
 */
- (JavaxXmlDatatypeDuration *)subtractWithJavaxXmlDatatypeDuration:(JavaxXmlDatatypeDuration *)rhs;

/*!
 @brief <p>Returns a <code>String</code> representation of this <code>Duration</code> <code>Object</code>.
 </p>
  
 <p>The result is formatted according to the XML Schema 1.0 specification and can be always parsed back later into the
  equivalent <code>Duration</code> <code>Object</code> by <code>DatatypeFactory.newDuration(String  lexicalRepresentation)</code>.</p>
  
 <p>Formally, the following holds for any <code>Duration</code>
  <code>Object</code> x:</p>
  @code

  new Duration(x.toString()).equals(x) 
  
@endcode
 @return A non-<code>null</code> valid <code>String</code> representation of this <code>Duration</code>.
 */
- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlDatatypeDuration)

FOUNDATION_EXPORT void JavaxXmlDatatypeDuration_init(JavaxXmlDatatypeDuration *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlDatatypeDuration)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxXmlDatatypeDuration")
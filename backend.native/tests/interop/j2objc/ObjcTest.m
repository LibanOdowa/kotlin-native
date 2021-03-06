#import "ObjcTest.h"
static int _myStaticInt = 20;

@implementation Foo

- (instancetype)init {
  _myInt = 10;
  return self;
}

- (int)returnNum:(int)x {
    return x;
}

- (int)return100 {
    return 100;
}

- (int)add2:(int)x secondparam:(int)y {
    return x + y;
}

+ (int)return100Static {
    return 100;
}


- (int)getMyInt {
    return _myInt;
}

- (void)setMyInt:(int)x {
    _myInt = x;
}

+ (int)getMyStaticInt {
    return _myStaticInt;
}

+ (void)setMyStaticInt:(int)x {
    _myStaticInt = x;

- (int)fib:(int)n {
  if (n == 0 || n == 1){
    return n;
  }
  return [self fib:(n-1)] + [self fib:(n-2)];
}

- (int)testKotlinInterface:(id<FooInterface>)i num:(int)n{
  return [i fib:(n)];

}
@end

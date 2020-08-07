//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ExtendsFoo.java
//

#include "J2ObjC_source.h"
#include "com/test/ExtendsFoo.h"
#include "com/test/Foo.h"

@implementation ComTestExtendsFoo

J2OBJC_IGNORE_DESIGNATED_BEGIN
- (instancetype)init {
  ComTestExtendsFoo_init(self);
  return self;
}
J2OBJC_IGNORE_DESIGNATED_END

- (jint)add2WithInt:(jint)a
            withInt:(jint)b {
  return a - b;
}

- (jint)add3WithInt:(jint)firstparam
            withInt:(jint)secondparam
            withInt:(jint)thirdparam {
  return [self add2WithInt:firstparam withInt:[self add2WithInt:secondparam withInt:thirdparam]];
}

- (ComTestFoo *)returnFoo {
  return create_ComTestFoo_init();
}

- (jint)testObjectParamNamesWithComTestFoo:(ComTestFoo *)a
                            withComTestFoo:(ComTestFoo *)b {
  return [((ComTestFoo *) nil_chk(a)) add2WithInt:10 withInt:20] + [((ComTestFoo *) nil_chk(b)) add2WithInt:-10 withInt:-20];
}

+ (const J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { NULL, NULL, 0x1, -1, -1, -1, -1, -1, -1 },
    { NULL, "I", 0x1, 0, 1, -1, -1, -1, -1 },
    { NULL, "I", 0x1, 2, 3, -1, -1, -1, -1 },
    { NULL, "LComTestFoo;", 0x1, -1, -1, -1, -1, -1, -1 },
    { NULL, "I", 0x1, 4, 5, -1, -1, -1, -1 },
  };
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wobjc-multiple-method-names"
  #pragma clang diagnostic ignored "-Wundeclared-selector"
  methods[0].selector = @selector(init);
  methods[1].selector = @selector(add2WithInt:withInt:);
  methods[2].selector = @selector(add3WithInt:withInt:withInt:);
  methods[3].selector = @selector(returnFoo);
  methods[4].selector = @selector(testObjectParamNamesWithComTestFoo:withComTestFoo:);
  #pragma clang diagnostic pop
  static const void *ptrTable[] = { "add2", "II", "add3", "III", "testObjectParamNames", "LComTestFoo;LComTestFoo;" };
  static const J2ObjcClassInfo _ComTestExtendsFoo = { "ExtendsFoo", "com.test", ptrTable, methods, NULL, 7, 0x1, 5, 0, -1, -1, -1, -1, -1 };
  return &_ComTestExtendsFoo;
}

@end

void ComTestExtendsFoo_init(ComTestExtendsFoo *self) {
  ComTestFoo_init(self);
}

ComTestExtendsFoo *new_ComTestExtendsFoo_init() {
  J2OBJC_NEW_IMPL(ComTestExtendsFoo, init)
}

ComTestExtendsFoo *create_ComTestExtendsFoo_init() {
  J2OBJC_CREATE_IMPL(ComTestExtendsFoo, init)
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(ComTestExtendsFoo)
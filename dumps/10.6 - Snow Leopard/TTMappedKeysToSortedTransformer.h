/*
 *     Generated by class-dump 3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSValueTransformer.h"

@class TTKeyMapTextEscaper;

@interface TTMappedKeysToSortedTransformer : NSValueTransformer
{
    TTKeyMapTextEscaper *_escaper;
}

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;
+ (id)localizedDescriptionForMappedKey:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)transformedValue:(id)arg1;

@end

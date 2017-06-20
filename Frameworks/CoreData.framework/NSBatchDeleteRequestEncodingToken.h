/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSBatchDeleteRequestEncodingToken : NSObject <NSSecureCoding> {
    NSData * _fetchData;
    long long  _resultType;
    bool  _secure;
}

@property (readonly, retain) NSData *fetchData;
@property (readonly) long long resultType;
@property (readonly) bool secure;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)fetchData;
- (id)initForRequest:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)resultType;
- (bool)secure;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFCard : NSObject <NSSecureCoding, SFCard> {
    NSString * _cardId;
    NSArray * _cardSections;
    NSString * _contextReferenceIdentifier;
    NSArray * _dismissalCommands;
    NSData * _entityIdentifier;
    struct { 
        unsigned int type : 1; 
        unsigned int source : 1; 
    }  _has;
    NSData * _intentMessageData;
    NSString * _intentMessageName;
    NSData * _intentResponseMessageData;
    NSString * _intentResponseMessageName;
    NSData * _originalCardData;
    NSString * _resultIdentifier;
    int  _source;
    NSString * _title;
    int  _type;
    NSURL * _urlValue;
}

@property (nonatomic, copy) NSString *cardId;
@property (copy) NSArray *cardSections;
@property (nonatomic, copy) NSString *contextReferenceIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, copy) NSArray *dismissalCommands;
@property (nonatomic, copy) NSData *entityIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSData *intentMessageData;
@property (nonatomic, copy) NSString *intentMessageName;
@property (nonatomic, copy) NSData *intentResponseMessageData;
@property (nonatomic, copy) NSString *intentResponseMessageName;
@property (nonatomic, readonly) NSData *jsonData;
@property (getter=_originalCardData, setter=_setOriginalCardData:, nonatomic, copy) NSData *originalCardData;
@property (nonatomic, copy) NSString *resultIdentifier;
@property (nonatomic) int source;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) int type;
@property (nonatomic, copy) NSURL *urlValue;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_originalCardData;
- (void)_setOriginalCardData:(id)arg1;
- (id)cardId;
- (id)cardSections;
- (id)contextReferenceIdentifier;
- (id)dictionaryRepresentation;
- (id)dismissalCommands;
- (void)encodeWithCoder:(id)arg1;
- (id)entityIdentifier;
- (bool)hasSource;
- (bool)hasType;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)intentMessageData;
- (id)intentMessageName;
- (id)intentResponseMessageData;
- (id)intentResponseMessageName;
- (id)jsonData;
- (void)loadCardSectionsWithCompletionAndErrorHandler:(id /* block */)arg1;
- (void)loadCardSectionsWithCompletionHandler:(id /* block */)arg1;
- (id)resultIdentifier;
- (void)setCardId:(id)arg1;
- (void)setCardSections:(id)arg1;
- (void)setContextReferenceIdentifier:(id)arg1;
- (void)setDismissalCommands:(id)arg1;
- (void)setEntityIdentifier:(id)arg1;
- (void)setIntentMessageData:(id)arg1;
- (void)setIntentMessageName:(id)arg1;
- (void)setIntentResponseMessageData:(id)arg1;
- (void)setIntentResponseMessageName:(id)arg1;
- (void)setResultIdentifier:(id)arg1;
- (void)setSource:(int)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(int)arg1;
- (void)setUrlValue:(id)arg1;
- (int)source;
- (id)title;
- (int)type;
- (id)urlValue;

@end

#import "TGCollectionItem.h"

@interface TGUserInfoTextCollectionItem : TGCollectionItem

@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *text;

@property (nonatomic, copy) void (^followLink)(NSString *);

@end

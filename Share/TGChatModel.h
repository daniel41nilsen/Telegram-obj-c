#import <Foundation/Foundation.h>

#import "TGPeerId.h"

@interface TGChatModel : NSObject

@property (nonatomic, readonly) TGPeerId peerId;

- (instancetype)initWithPeerId:(TGPeerId)peerId;

@end

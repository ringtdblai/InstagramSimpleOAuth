#import <UIKit/UIKit.h>


@interface InstagramSimpleOAuthViewController : UIViewController

@property (copy, nonatomic) NSString *clientID;
@property (copy, nonatomic) NSString *clientSecret;
@property (strong, nonatomic) NSURL *callbackURL;
@property (copy, nonatomic) void (^completion)(NSString *authToken);

- (instancetype)initWithClientID:(NSString *)clientID
                    clientSecret:(NSString *)clientSecret
                     callbackURL:(NSURL *)callbackURL
                      completion:(void (^)(NSString *authToken))completion;

@end

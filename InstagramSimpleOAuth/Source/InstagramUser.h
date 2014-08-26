

@interface InstagramUser : NSObject

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *fullName;
@property (strong, nonatomic) NSURL *profilePictureURL;

- (instancetype)initWithUserResponse:(NSDictionary *)userResponse;

@end
/* Account.h  Version:0.1 Created by WANG Hailei on 7/10/10. */#import <Cocoa/Cocoa.h>#import <InstantMessage/IMService.h>#import <AddressBook/AddressBook.h>@interface Account : NSObject@property (assign) NSString * xmppServiceAccountStatus;@property (assign) NSString * accountHostIPAddress;- (void) retrieveAccountStatusForService:(IMService *)anIMService;@end
/* Contacts.h  Representing the Model of the contacts get from iChat XMPP service's artsmesh group.  Version:0.1 Created by WANG Hailei on 7/10/10. */#import <Cocoa/Cocoa.h>#import <InstantMessage/IMService.h>@interface Contacts : NSObject@property (retain) NSArray * artsmeshContacts;- (void) retrieveArtsmeshContactsFromXMPPService;- (void) getContactsIPAddresses;@end
//
//  QMDialogsMemoryStorage.h
//  Q-municate
//
//  Created by Andrey on 03.11.14.
//  Copyright (c) 2014 Quickblox. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Quickblox/Quickblox.h>

@interface QMDialogsMemoryStorage : NSObject

- (QBChatDialog *)chatDialogWithID:(NSString *)dialogID;
- (QBChatDialog *)chatDialogWithRoomName:(NSString *)roomName;
- (QBChatDialog *)chatDialogWithChatRoom:(QBChatRoom *)chatRoom;
- (QBChatDialog *)privateChatDialogWithOpponentID:(NSUInteger)opponentID;

- (void)setMessages:(NSArray *)messages withDialogID:(NSString *)dialogID;

- (NSArray *)unreadDialogs;
- (NSArray *)unsortedDialogs;
- (NSArray *)dialogsSortByLastMessageDateWithAscending:(BOOL)ascending;

@end

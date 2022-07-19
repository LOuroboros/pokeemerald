#ifndef GUARD_CONSTANTS_QUESTS_H
#define GUARD_CONSTANTS_QUESTS_H

// questm enu scripting command params
#define QUEST_MENU_OPEN                 0   // opens the quest menu (questId = 0)
#define QUEST_MENU_UNLOCK_QUEST         1   // questId = QUEST_X (0-indexed)
#define QUEST_MENU_SET_ACTIVE           2   // questId = QUEST_X (0-indexed)
#define QUEST_MENU_SET_REWARD           3   // questId = QUEST_X (0-indexed)
#define QUEST_MENU_COMPLETE_QUEST       4   // questId = QUEST_X (0-indexed)
#define QUEST_MENU_CHECK_UNLOCKED       5   // checks if questId has been unlocked. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_ACTIVE         6   // checks if questId has been unlocked. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_REWARD         7   // checks if questId is in Reward state. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_COMPLETE       8   // checks if questId has been completed. Returns result to gSpecialVar_Result
#define QUEST_MENU_BUFFER_QUEST_NAME    9   // buffers a quest name to gStringVar1

// quest number defines
#define QUEST_1          0
#define QUEST_2          1
#define QUEST_COUNT      2

#define QUEST_1_SUB_QUEST_COUNT  0

#define QUEST_2_SUB_QUEST_1      0
#define QUEST_2_SUB_QUEST_2      1
#define QUEST_2_SUB_QUEST_3      2
#define QUEST_2_SUB_QUEST_4      3
#define QUEST_2_SUB_QUEST_5      4
#define QUEST_2_SUB_QUEST_6      5
#define QUEST_2_SUB_QUEST_7      6
#define QUEST_2_SUB_QUEST_8      7
#define QUEST_2_SUB_QUEST_COUNT  8

#define SUB_QUEST_COUNT (QUEST_1_SUB_QUEST_COUNT + QUEST_2_SUB_QUEST_COUNT)

#define QUEST_ARRAY_COUNT (SUB_QUEST_COUNT > QUEST_COUNT ? SUB_QUEST_COUNT : QUEST_COUNT)

#endif // GUARD_CONSTANTS_QUESTS_H

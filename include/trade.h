#ifndef GUARD_TRADE_H
#define GUARD_TRADE_H

#include "constants/trade.h"

// Exported type declarations

// Exported RAM declarations
extern struct MailStruct gTradeMail[PARTY_SIZE];
extern u8 gSelectedTradeMonPositions[2];

// Exported ROM declarations
extern const struct WindowTemplate gTradeEvolutionSceneYesNoWindowTemplate;

s32 GetGameProgressForLinkTrade(void);
void CB2_StartCreateTradeMenu(void);
void CB2_LinkTrade(void);
void InitTradeSequenceBgGpuRegs(void);
void LinkTradeDrawWindow(void);
void InitTradeBg(void);
void DrawTextOnTradeWindow(u8, const u8 *, u8);

#endif //GUARD_TRADE_H

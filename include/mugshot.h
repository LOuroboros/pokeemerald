#ifndef GUARD_MUGSHOT_H
#define GUARD_MUGSHOT_H

void DrawMugshot(void); //VAR_0x8000 = mugshot id
void DrawMugshotAtPos(void); //VAR_0x8000 = mugshot id, VAR_0x8001 = x, VAR_0x8002 = y
void ClearMugshot(void);
bool32 IsMugshotDrawn(void);

#endif // GUARD_MUGSHOT_H

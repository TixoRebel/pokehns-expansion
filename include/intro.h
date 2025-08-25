#ifndef GUARD_INTRO_H
#define GUARD_INTRO_H

// Exported type declarations

// Exported RAM declarations

// Exported ROM declarations
void CB2_InitCopyrightScreenAfterBootup(void);
void CB2_InitCopyrightScreenAfterTitleScreen(void);
void CB2_CopyrightScreen(void); // HnS
void PanFadeAndZoomScreen(u16 screenX, u16 screenY, u16 zoom, u16 alpha);
// void c2_copyright_1(void); // HnS
void MainCB2_Intro(void);
void MainCB2_EndIntro(void);
void Task_Scene1_Load(u8);

#endif // GUARD_INTRO_H

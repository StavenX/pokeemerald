#ifndef GUARD_ITEM_MENU_ICONS
#define GUARD_ITEM_MENU_ICONS

extern const struct CompressedSpriteSheet gUnknown_0857FDEC;
extern const struct CompressedSpritePalette gUnknown_0857FDF4;

u8 sub_80D511C(u8 a0, u8 a1, u8 a2, u8 a3);
u8 CreateBerryTagSprite(u8 id, s16 x, s16 y);
void FreeBerryTagSpritePalette(void);
u8 CreateBerryFlavorCircleSprite(s16 x);
void sub_80D4FAC(void);
void RemoveBagItemIconObject(u8);
void sub_80D4FEC(u8);
void sub_80D4FC8(u8);

#endif // GUARD_ITEM_MENU_ICONS

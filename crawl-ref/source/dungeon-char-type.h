#pragma once  // NOTE: The order of these is very important to their usage! // [dshaligram] If adding/removing from this list, also update viewchar.cc! enum dungeon_char_type {     DCHAR_WALL,     DCHAR_PERMAWALL,     DCHAR_WALL_MAGIC,     DCHAR_FLOOR,     DCHAR_FLOOR_MAGIC,     DCHAR_DOOR_OPEN,     DCHAR_DOOR_CLOSED,     DCHAR_TRAP,     DCHAR_STAIRS_DOWN,     DCHAR_STAIRS_UP,     DCHAR_GRATE,     DCHAR_ALTAR,     DCHAR_ARCH,     DCHAR_FOUNTAIN,     DCHAR_WAVY,     DCHAR_STATUE,     DCHAR_INVIS_EXPOSED,     DCHAR_ITEM_DETECTED,     DCHAR_ITEM_ORB,     DCHAR_ITEM_RUNE,     DCHAR_ITEM_WEAPON,     DCHAR_ITEM_ARMOUR,     DCHAR_ITEM_WAND,     DCHAR_ITEM_FOOD,     DCHAR_ITEM_SCROLL,     DCHAR_ITEM_RING,     DCHAR_ITEM_POTION,     DCHAR_ITEM_MISSILE,     DCHAR_ITEM_BOOK,     DCHAR_ITEM_STAFF, #if TAG_MAJOR_VERSION == 34     DCHAR_ITEM_ROD, #endif     DCHAR_ITEM_MISCELLANY,     DCHAR_ITEM_CORPSE,     DCHAR_ITEM_SKELETON,     DCHAR_ITEM_GOLD,     DCHAR_ITEM_AMULET,     DCHAR_CLOUD,     DCHAR_TREE, #if TAG_MAJOR_VERSION == 34     DCHAR_TELEPORTER, #endif     DCHAR_TRANSPORTER,     DCHAR_TRANSPORTER_LANDING,      DCHAR_SPACE,     DCHAR_FIRED_BOLT,     DCHAR_FIRED_ZAP,     DCHAR_FIRED_BURST,     DCHAR_FIRED_DEBUG,     DCHAR_FIRED_MISSILE,     DCHAR_EXPLOSION,      DCHAR_FRAME_HORIZ,     DCHAR_FRAME_VERT,     DCHAR_FRAME_TL,     DCHAR_FRAME_TR,     DCHAR_FRAME_BL,     DCHAR_FRAME_BR,      DCHAR_DRAW_HORIZ,     DCHAR_DRAW_VERT,     DCHAR_DRAW_SLASH,     DCHAR_DRAW_BACKSLASH,     DCHAR_DRAW_TL,     DCHAR_DRAW_TR,     DCHAR_DRAW_BL,     DCHAR_DRAW_BR,     DCHAR_DRAW_DOWN,     DCHAR_DRAW_UP,     DCHAR_DRAW_RIGHT,     DCHAR_DRAW_LEFT,      NUM_DCHAR_TYPES }; 
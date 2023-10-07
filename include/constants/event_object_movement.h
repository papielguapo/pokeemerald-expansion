#ifndef GUARD_CONSTANTS_EVENT_OBJECT_MOVEMENT_H
#define GUARD_CONSTANTS_EVENT_OBJECT_MOVEMENT_H

#define MOVEMENT_TYPE_NONE                             0x0
#define MOVEMENT_TYPE_LOOK_AROUND                      0x1
#define MOVEMENT_TYPE_WANDER_AROUND                    0x2
#define MOVEMENT_TYPE_WANDER_UP_AND_DOWN               0x3
#define MOVEMENT_TYPE_WANDER_DOWN_AND_UP               0x4
#define MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT            0x5
#define MOVEMENT_TYPE_WANDER_RIGHT_AND_LEFT            0x6
#define MOVEMENT_TYPE_FACE_UP                          0x7
#define MOVEMENT_TYPE_FACE_DOWN                        0x8
#define MOVEMENT_TYPE_FACE_LEFT                        0x9
#define MOVEMENT_TYPE_FACE_RIGHT                       0xA
#define MOVEMENT_TYPE_PLAYER                           0xB
#define MOVEMENT_TYPE_BERRY_TREE_GROWTH                0xC
#define MOVEMENT_TYPE_FACE_DOWN_AND_UP                 0xD
#define MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT              0xE
#define MOVEMENT_TYPE_FACE_UP_AND_LEFT                 0xF
#define MOVEMENT_TYPE_FACE_UP_AND_RIGHT                0x10
#define MOVEMENT_TYPE_FACE_DOWN_AND_LEFT               0x11
#define MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT              0x12
#define MOVEMENT_TYPE_FACE_DOWN_UP_AND_LEFT            0x13
#define MOVEMENT_TYPE_FACE_DOWN_UP_AND_RIGHT           0x14
#define MOVEMENT_TYPE_FACE_UP_LEFT_AND_RIGHT           0x15
#define MOVEMENT_TYPE_FACE_DOWN_LEFT_AND_RIGHT         0x16
#define MOVEMENT_TYPE_ROTATE_COUNTERCLOCKWISE          0x17
#define MOVEMENT_TYPE_ROTATE_CLOCKWISE                 0x18
#define MOVEMENT_TYPE_WALK_UP_AND_DOWN                 0x19
#define MOVEMENT_TYPE_WALK_DOWN_AND_UP                 0x1A
#define MOVEMENT_TYPE_WALK_LEFT_AND_RIGHT              0x1B
#define MOVEMENT_TYPE_WALK_RIGHT_AND_LEFT              0x1C
#define MOVEMENT_TYPE_WALK_SEQUENCE_UP_RIGHT_LEFT_DOWN 0x1D
#define MOVEMENT_TYPE_WALK_SEQUENCE_RIGHT_LEFT_DOWN_UP 0x1E
#define MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_UP_RIGHT_LEFT 0x1F
#define MOVEMENT_TYPE_WALK_SEQUENCE_LEFT_DOWN_UP_RIGHT 0x20
#define MOVEMENT_TYPE_WALK_SEQUENCE_UP_LEFT_RIGHT_DOWN 0x21
#define MOVEMENT_TYPE_WALK_SEQUENCE_LEFT_RIGHT_DOWN_UP 0x22
#define MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_UP_LEFT_RIGHT 0x23
#define MOVEMENT_TYPE_WALK_SEQUENCE_RIGHT_DOWN_UP_LEFT 0x24
#define MOVEMENT_TYPE_WALK_SEQUENCE_LEFT_UP_DOWN_RIGHT 0x25
#define MOVEMENT_TYPE_WALK_SEQUENCE_UP_DOWN_RIGHT_LEFT 0x26
#define MOVEMENT_TYPE_WALK_SEQUENCE_RIGHT_LEFT_UP_DOWN 0x27
#define MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_RIGHT_LEFT_UP 0x28
#define MOVEMENT_TYPE_WALK_SEQUENCE_RIGHT_UP_DOWN_LEFT 0x29
#define MOVEMENT_TYPE_WALK_SEQUENCE_UP_DOWN_LEFT_RIGHT 0x2A
#define MOVEMENT_TYPE_WALK_SEQUENCE_LEFT_RIGHT_UP_DOWN 0x2B
#define MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_LEFT_RIGHT_UP 0x2C
#define MOVEMENT_TYPE_WALK_SEQUENCE_UP_LEFT_DOWN_RIGHT 0x2D
#define MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_RIGHT_UP_LEFT 0x2E
#define MOVEMENT_TYPE_WALK_SEQUENCE_LEFT_DOWN_RIGHT_UP 0x2F
#define MOVEMENT_TYPE_WALK_SEQUENCE_RIGHT_UP_LEFT_DOWN 0x30
#define MOVEMENT_TYPE_WALK_SEQUENCE_UP_RIGHT_DOWN_LEFT 0x31
#define MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_LEFT_UP_RIGHT 0x32
#define MOVEMENT_TYPE_WALK_SEQUENCE_LEFT_UP_RIGHT_DOWN 0x33
#define MOVEMENT_TYPE_WALK_SEQUENCE_RIGHT_DOWN_LEFT_UP 0x34
#define MOVEMENT_TYPE_COPY_PLAYER                      0x35
#define MOVEMENT_TYPE_COPY_PLAYER_OPPOSITE             0x36
#define MOVEMENT_TYPE_COPY_PLAYER_COUNTERCLOCKWISE     0x37
#define MOVEMENT_TYPE_COPY_PLAYER_CLOCKWISE            0x38
#define MOVEMENT_TYPE_TREE_DISGUISE                    0x39
#define MOVEMENT_TYPE_MOUNTAIN_DISGUISE                0x3A
#define MOVEMENT_TYPE_COPY_PLAYER_IN_GRASS             0x3B
#define MOVEMENT_TYPE_COPY_PLAYER_OPPOSITE_IN_GRASS    0x3C
#define MOVEMENT_TYPE_COPY_PLAYER_COUNTERCLOCKWISE_IN_GRASS 0x3D
#define MOVEMENT_TYPE_COPY_PLAYER_CLOCKWISE_IN_GRASS   0x3E
#define MOVEMENT_TYPE_BURIED                           0x3F
#define MOVEMENT_TYPE_WALK_IN_PLACE_DOWN               0x40
#define MOVEMENT_TYPE_WALK_IN_PLACE_UP                 0x41
#define MOVEMENT_TYPE_WALK_IN_PLACE_LEFT               0x42
#define MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT              0x43
#define MOVEMENT_TYPE_JOG_IN_PLACE_DOWN                0x44
#define MOVEMENT_TYPE_JOG_IN_PLACE_UP                  0x45
#define MOVEMENT_TYPE_JOG_IN_PLACE_LEFT                0x46
#define MOVEMENT_TYPE_JOG_IN_PLACE_RIGHT               0x47
#define MOVEMENT_TYPE_RUN_IN_PLACE_DOWN                0x48
#define MOVEMENT_TYPE_RUN_IN_PLACE_UP                  0x49
#define MOVEMENT_TYPE_RUN_IN_PLACE_LEFT                0x4A
#define MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT               0x4B
#define MOVEMENT_TYPE_INVISIBLE                        0x4C
#define MOVEMENT_TYPE_WALK_SLOWLY_IN_PLACE_DOWN        0x4D
#define MOVEMENT_TYPE_WALK_SLOWLY_IN_PLACE_UP          0x4E
#define MOVEMENT_TYPE_WALK_SLOWLY_IN_PLACE_LEFT        0x4F
#define MOVEMENT_TYPE_WALK_SLOWLY_IN_PLACE_RIGHT       0x50
#define NUM_MOVEMENT_TYPES                             0x51

#define MOVEMENT_ACTION_FACE_DOWN                       0x0
#define MOVEMENT_ACTION_FACE_UP                         0x1
#define MOVEMENT_ACTION_FACE_LEFT                       0x2
#define MOVEMENT_ACTION_FACE_RIGHT                      0x3
#define MOVEMENT_ACTION_WALK_SLOW_DOWN                  0x4
#define MOVEMENT_ACTION_WALK_SLOW_UP                    0x5
#define MOVEMENT_ACTION_WALK_SLOW_LEFT                  0x6
#define MOVEMENT_ACTION_WALK_SLOW_RIGHT                 0x7
#define MOVEMENT_ACTION_WALK_NORMAL_DOWN                0x8
#define MOVEMENT_ACTION_WALK_NORMAL_UP                  0x9
#define MOVEMENT_ACTION_WALK_NORMAL_LEFT                0xA
#define MOVEMENT_ACTION_WALK_NORMAL_RIGHT               0xB
#define MOVEMENT_ACTION_JUMP_2_DOWN                     0xC
#define MOVEMENT_ACTION_JUMP_2_UP                       0xD
#define MOVEMENT_ACTION_JUMP_2_LEFT                     0xE
#define MOVEMENT_ACTION_JUMP_2_RIGHT                    0xF
#define MOVEMENT_ACTION_DELAY_1                         0x10
#define MOVEMENT_ACTION_DELAY_2                         0x11
#define MOVEMENT_ACTION_DELAY_4                         0x12
#define MOVEMENT_ACTION_DELAY_8                         0x13
#define MOVEMENT_ACTION_DELAY_16                        0x14
#define MOVEMENT_ACTION_WALK_FAST_DOWN                  0x15
#define MOVEMENT_ACTION_WALK_FAST_UP                    0x16
#define MOVEMENT_ACTION_WALK_FAST_LEFT                  0x17
#define MOVEMENT_ACTION_WALK_FAST_RIGHT                 0x18
#define MOVEMENT_ACTION_WALK_IN_PLACE_SLOW_DOWN         0x19
#define MOVEMENT_ACTION_WALK_IN_PLACE_SLOW_UP           0x1A
#define MOVEMENT_ACTION_WALK_IN_PLACE_SLOW_LEFT         0x1B
#define MOVEMENT_ACTION_WALK_IN_PLACE_SLOW_RIGHT        0x1C
#define MOVEMENT_ACTION_WALK_IN_PLACE_NORMAL_DOWN       0x1D
#define MOVEMENT_ACTION_WALK_IN_PLACE_NORMAL_UP         0x1E
#define MOVEMENT_ACTION_WALK_IN_PLACE_NORMAL_LEFT       0x1F
#define MOVEMENT_ACTION_WALK_IN_PLACE_NORMAL_RIGHT      0x20
#define MOVEMENT_ACTION_WALK_IN_PLACE_FAST_DOWN         0x21
#define MOVEMENT_ACTION_WALK_IN_PLACE_FAST_UP           0x22
#define MOVEMENT_ACTION_WALK_IN_PLACE_FAST_LEFT         0x23
#define MOVEMENT_ACTION_WALK_IN_PLACE_FAST_RIGHT        0x24
#define MOVEMENT_ACTION_WALK_IN_PLACE_FASTER_DOWN       0x25
#define MOVEMENT_ACTION_WALK_IN_PLACE_FASTER_UP         0x26
#define MOVEMENT_ACTION_WALK_IN_PLACE_FASTER_LEFT       0x27
#define MOVEMENT_ACTION_WALK_IN_PLACE_FASTER_RIGHT      0x28
#define MOVEMENT_ACTION_RIDE_WATER_CURRENT_DOWN         0x29
#define MOVEMENT_ACTION_RIDE_WATER_CURRENT_UP           0x2A
#define MOVEMENT_ACTION_RIDE_WATER_CURRENT_LEFT         0x2B
#define MOVEMENT_ACTION_RIDE_WATER_CURRENT_RIGHT        0x2C
#define MOVEMENT_ACTION_WALK_FASTER_DOWN                0x2D
#define MOVEMENT_ACTION_WALK_FASTER_UP                  0x2E
#define MOVEMENT_ACTION_WALK_FASTER_LEFT                0x2F
#define MOVEMENT_ACTION_WALK_FASTER_RIGHT               0x30
#define MOVEMENT_ACTION_SLIDE_DOWN                      0x31
#define MOVEMENT_ACTION_SLIDE_UP                        0x32
#define MOVEMENT_ACTION_SLIDE_LEFT                      0x33
#define MOVEMENT_ACTION_SLIDE_RIGHT                     0x34
#define MOVEMENT_ACTION_PLAYER_RUN_DOWN                 0x35
#define MOVEMENT_ACTION_PLAYER_RUN_UP                   0x36
#define MOVEMENT_ACTION_PLAYER_RUN_LEFT                 0x37
#define MOVEMENT_ACTION_PLAYER_RUN_RIGHT                0x38
#define MOVEMENT_ACTION_START_ANIM_IN_DIRECTION         0x39
#define MOVEMENT_ACTION_JUMP_SPECIAL_DOWN               0x3A
#define MOVEMENT_ACTION_JUMP_SPECIAL_UP                 0x3B
#define MOVEMENT_ACTION_JUMP_SPECIAL_LEFT               0x3C
#define MOVEMENT_ACTION_JUMP_SPECIAL_RIGHT              0x3D
#define MOVEMENT_ACTION_FACE_PLAYER                     0x3E
#define MOVEMENT_ACTION_FACE_AWAY_PLAYER                0x3F
#define MOVEMENT_ACTION_LOCK_FACING_DIRECTION           0x40
#define MOVEMENT_ACTION_UNLOCK_FACING_DIRECTION         0x41
#define MOVEMENT_ACTION_JUMP_DOWN                       0x42
#define MOVEMENT_ACTION_JUMP_UP                         0x43
#define MOVEMENT_ACTION_JUMP_LEFT                       0x44
#define MOVEMENT_ACTION_JUMP_RIGHT                      0x45
#define MOVEMENT_ACTION_JUMP_IN_PLACE_DOWN              0x46
#define MOVEMENT_ACTION_JUMP_IN_PLACE_UP                0x47
#define MOVEMENT_ACTION_JUMP_IN_PLACE_LEFT              0x48
#define MOVEMENT_ACTION_JUMP_IN_PLACE_RIGHT             0x49
#define MOVEMENT_ACTION_JUMP_IN_PLACE_DOWN_UP           0x4A
#define MOVEMENT_ACTION_JUMP_IN_PLACE_UP_DOWN           0x4B
#define MOVEMENT_ACTION_JUMP_IN_PLACE_LEFT_RIGHT        0x4C
#define MOVEMENT_ACTION_JUMP_IN_PLACE_RIGHT_LEFT        0x4D
#define MOVEMENT_ACTION_FACE_ORIGINAL_DIRECTION         0x4E
#define MOVEMENT_ACTION_NURSE_JOY_BOW_DOWN              0x4F
#define MOVEMENT_ACTION_ENABLE_JUMP_LANDING_GROUND_EFFECT 0x50
#define MOVEMENT_ACTION_DISABLE_JUMP_LANDING_GROUND_EFFECT 0x51
#define MOVEMENT_ACTION_DISABLE_ANIMATION               0x52
#define MOVEMENT_ACTION_RESTORE_ANIMATION               0x53
#define MOVEMENT_ACTION_SET_INVISIBLE                   0x54
#define MOVEMENT_ACTION_SET_VISIBLE                     0x55
#define MOVEMENT_ACTION_EMOTE_EXCLAMATION_MARK          0x56
#define MOVEMENT_ACTION_EMOTE_QUESTION_MARK             0x57
#define MOVEMENT_ACTION_EMOTE_HEART                     0x58
#define MOVEMENT_ACTION_REVEAL_TRAINER                  0x59
#define MOVEMENT_ACTION_ROCK_SMASH_BREAK                0x5A
#define MOVEMENT_ACTION_CUT_TREE                        0x5B
#define MOVEMENT_ACTION_SET_FIXED_PRIORITY              0x5C
#define MOVEMENT_ACTION_CLEAR_FIXED_PRIORITY            0x5D
#define MOVEMENT_ACTION_INIT_AFFINE_ANIM                0x5E
#define MOVEMENT_ACTION_CLEAR_AFFINE_ANIM               0x5F
#define MOVEMENT_ACTION_HIDE_REFLECTION                 0x60
#define MOVEMENT_ACTION_SHOW_REFLECTION                 0x61
#define MOVEMENT_ACTION_WALK_DOWN_START_AFFINE          0x62
#define MOVEMENT_ACTION_WALK_DOWN_AFFINE                0x63
#define MOVEMENT_ACTION_ACRO_WHEELIE_FACE_DOWN          0x64
#define MOVEMENT_ACTION_ACRO_WHEELIE_FACE_UP            0x65
#define MOVEMENT_ACTION_ACRO_WHEELIE_FACE_LEFT          0x66
#define MOVEMENT_ACTION_ACRO_WHEELIE_FACE_RIGHT         0x67
#define MOVEMENT_ACTION_ACRO_POP_WHEELIE_DOWN           0x68
#define MOVEMENT_ACTION_ACRO_POP_WHEELIE_UP             0x69
#define MOVEMENT_ACTION_ACRO_POP_WHEELIE_LEFT           0x6A
#define MOVEMENT_ACTION_ACRO_POP_WHEELIE_RIGHT          0x6B
#define MOVEMENT_ACTION_ACRO_END_WHEELIE_FACE_DOWN      0x6C
#define MOVEMENT_ACTION_ACRO_END_WHEELIE_FACE_UP        0x6D
#define MOVEMENT_ACTION_ACRO_END_WHEELIE_FACE_LEFT      0x6E
#define MOVEMENT_ACTION_ACRO_END_WHEELIE_FACE_RIGHT     0x6F
#define MOVEMENT_ACTION_ACRO_WHEELIE_HOP_FACE_DOWN      0x70
#define MOVEMENT_ACTION_ACRO_WHEELIE_HOP_FACE_UP        0x71
#define MOVEMENT_ACTION_ACRO_WHEELIE_HOP_FACE_LEFT      0x72
#define MOVEMENT_ACTION_ACRO_WHEELIE_HOP_FACE_RIGHT     0x73
#define MOVEMENT_ACTION_ACRO_WHEELIE_HOP_DOWN           0x74
#define MOVEMENT_ACTION_ACRO_WHEELIE_HOP_UP             0x75
#define MOVEMENT_ACTION_ACRO_WHEELIE_HOP_LEFT           0x76
#define MOVEMENT_ACTION_ACRO_WHEELIE_HOP_RIGHT          0x77
#define MOVEMENT_ACTION_ACRO_WHEELIE_JUMP_DOWN          0x78
#define MOVEMENT_ACTION_ACRO_WHEELIE_JUMP_UP            0x79
#define MOVEMENT_ACTION_ACRO_WHEELIE_JUMP_LEFT          0x7A
#define MOVEMENT_ACTION_ACRO_WHEELIE_JUMP_RIGHT         0x7B
#define MOVEMENT_ACTION_ACRO_WHEELIE_IN_PLACE_DOWN      0x7C
#define MOVEMENT_ACTION_ACRO_WHEELIE_IN_PLACE_UP        0x7D
#define MOVEMENT_ACTION_ACRO_WHEELIE_IN_PLACE_LEFT      0x7E
#define MOVEMENT_ACTION_ACRO_WHEELIE_IN_PLACE_RIGHT     0x7F
#define MOVEMENT_ACTION_ACRO_POP_WHEELIE_MOVE_DOWN      0x80
#define MOVEMENT_ACTION_ACRO_POP_WHEELIE_MOVE_UP        0x81
#define MOVEMENT_ACTION_ACRO_POP_WHEELIE_MOVE_LEFT      0x82
#define MOVEMENT_ACTION_ACRO_POP_WHEELIE_MOVE_RIGHT     0x83
#define MOVEMENT_ACTION_ACRO_WHEELIE_MOVE_DOWN          0x84
#define MOVEMENT_ACTION_ACRO_WHEELIE_MOVE_UP            0x85
#define MOVEMENT_ACTION_ACRO_WHEELIE_MOVE_LEFT          0x86
#define MOVEMENT_ACTION_ACRO_WHEELIE_MOVE_RIGHT         0x87
#define MOVEMENT_ACTION_ACRO_END_WHEELIE_MOVE_DOWN      0x88
#define MOVEMENT_ACTION_ACRO_END_WHEELIE_MOVE_UP        0x89
#define MOVEMENT_ACTION_ACRO_END_WHEELIE_MOVE_LEFT      0x8A
#define MOVEMENT_ACTION_ACRO_END_WHEELIE_MOVE_RIGHT     0x8B
#define MOVEMENT_ACTION_WALK_NORMAL_DIAGONAL_UP_LEFT    0x8C
#define MOVEMENT_ACTION_WALK_NORMAL_DIAGONAL_UP_RIGHT   0x8D
#define MOVEMENT_ACTION_WALK_NORMAL_DIAGONAL_DOWN_LEFT  0x8E
#define MOVEMENT_ACTION_WALK_NORMAL_DIAGONAL_DOWN_RIGHT 0x8F
#define MOVEMENT_ACTION_WALK_SLOW_DIAGONAL_UP_LEFT      0x90
#define MOVEMENT_ACTION_WALK_SLOW_DIAGONAL_UP_RIGHT     0x91
#define MOVEMENT_ACTION_WALK_SLOW_DIAGONAL_DOWN_LEFT    0x92
#define MOVEMENT_ACTION_WALK_SLOW_DIAGONAL_DOWN_RIGHT   0x93
#define MOVEMENT_ACTION_LOCK_ANIM                       0x94
#define MOVEMENT_ACTION_UNLOCK_ANIM                     0x95
#define MOVEMENT_ACTION_WALK_LEFT_AFFINE                0x96
#define MOVEMENT_ACTION_WALK_RIGHT_AFFINE               0x97
#define MOVEMENT_ACTION_LEVITATE                        0x98
#define MOVEMENT_ACTION_STOP_LEVITATE                   0x99
#define MOVEMENT_ACTION_STOP_LEVITATE_AT_TOP            0x9A
#define MOVEMENT_ACTION_FIGURE_8                        0x9B
#define MOVEMENT_ACTION_FLY_UP                          0x9C
#define MOVEMENT_ACTION_FLY_DOWN                        0x9D
// slow running
#define MOVEMENT_ACTION_RUN_DOWN_SLOW                   0x9E
#define MOVEMENT_ACTION_RUN_UP_SLOW                     0x9F
#define MOVEMENT_ACTION_RUN_LEFT_SLOW                   0xA0
#define MOVEMENT_ACTION_RUN_RIGHT_SLOW                  0xA1

#define MOVEMENT_ACTION_STEP_END 0xFE
#define MOVEMENT_ACTION_NONE     0xFF

#define ANIM_STD_FACE_SOUTH       0
#define ANIM_STD_FACE_NORTH       1
#define ANIM_STD_FACE_WEST        2
#define ANIM_STD_FACE_EAST        3
#define ANIM_STD_GO_SOUTH         4
#define ANIM_STD_GO_NORTH         5
#define ANIM_STD_GO_WEST          6
#define ANIM_STD_GO_EAST          7
#define ANIM_STD_GO_FAST_SOUTH    8
#define ANIM_STD_GO_FAST_NORTH    9
#define ANIM_STD_GO_FAST_WEST     10
#define ANIM_STD_GO_FAST_EAST     11
#define ANIM_STD_GO_FASTER_SOUTH  12
#define ANIM_STD_GO_FASTER_NORTH  13
#define ANIM_STD_GO_FASTER_WEST   14
#define ANIM_STD_GO_FASTER_EAST   15
#define ANIM_STD_GO_FASTEST_SOUTH 16
#define ANIM_STD_GO_FASTEST_NORTH 17
#define ANIM_STD_GO_FASTEST_WEST  18
#define ANIM_STD_GO_FASTEST_EAST  19
#define ANIM_STD_COUNT            20

#define ANIM_RUN_SOUTH (ANIM_STD_COUNT + 0)
#define ANIM_RUN_NORTH (ANIM_STD_COUNT + 1)
#define ANIM_RUN_WEST  (ANIM_STD_COUNT + 2)
#define ANIM_RUN_EAST  (ANIM_STD_COUNT + 3)

#define ANIM_BUNNY_HOP_BACK_WHEEL_SOUTH         (ANIM_STD_COUNT + 0)
#define ANIM_BUNNY_HOP_BACK_WHEEL_NORTH         (ANIM_STD_COUNT + 1)
#define ANIM_BUNNY_HOP_BACK_WHEEL_WEST          (ANIM_STD_COUNT + 2)
#define ANIM_BUNNY_HOP_BACK_WHEEL_EAST          (ANIM_STD_COUNT + 3)
#define ANIM_BUNNY_HOP_FRONT_WHEEL_SOUTH        (ANIM_STD_COUNT + 4)
#define ANIM_BUNNY_HOP_FRONT_WHEEL_NORTH        (ANIM_STD_COUNT + 5)
#define ANIM_BUNNY_HOP_FRONT_WHEEL_WEST         (ANIM_STD_COUNT + 6)
#define ANIM_BUNNY_HOP_FRONT_WHEEL_EAST         (ANIM_STD_COUNT + 7)
#define ANIM_STANDING_WHEELIE_BACK_WHEEL_SOUTH  (ANIM_STD_COUNT + 8)
#define ANIM_STANDING_WHEELIE_BACK_WHEEL_NORTH  (ANIM_STD_COUNT + 9)
#define ANIM_STANDING_WHEELIE_BACK_WHEEL_WEST   (ANIM_STD_COUNT + 10)
#define ANIM_STANDING_WHEELIE_BACK_WHEEL_EAST   (ANIM_STD_COUNT + 11)
#define ANIM_STANDING_WHEELIE_FRONT_WHEEL_SOUTH (ANIM_STD_COUNT + 12)
#define ANIM_STANDING_WHEELIE_FRONT_WHEEL_NORTH (ANIM_STD_COUNT + 13)
#define ANIM_STANDING_WHEELIE_FRONT_WHEEL_WEST  (ANIM_STD_COUNT + 14)
#define ANIM_STANDING_WHEELIE_FRONT_WHEEL_EAST  (ANIM_STD_COUNT + 15)
#define ANIM_MOVING_WHEELIE_SOUTH               (ANIM_STD_COUNT + 16)
#define ANIM_MOVING_WHEELIE_NORTH               (ANIM_STD_COUNT + 17)
#define ANIM_MOVING_WHEELIE_WEST                (ANIM_STD_COUNT + 18)
#define ANIM_MOVING_WHEELIE_EAST                (ANIM_STD_COUNT + 19)

#define ANIM_GET_ON_OFF_POKEMON_SOUTH (ANIM_STD_COUNT + 0)
#define ANIM_GET_ON_OFF_POKEMON_NORTH (ANIM_STD_COUNT + 1)
#define ANIM_GET_ON_OFF_POKEMON_WEST  (ANIM_STD_COUNT + 2)
#define ANIM_GET_ON_OFF_POKEMON_EAST  (ANIM_STD_COUNT + 3)

#define ANIM_NURSE_BOW (ANIM_STD_COUNT + 0)

#define ANIM_FIELD_MOVE 0

#define ANIM_STAY_STILL      0
#define ANIM_REMOVE_OBSTACLE 1

#define ANIM_TAKE_OUT_ROD_SOUTH   0
#define ANIM_TAKE_OUT_ROD_NORTH   1
#define ANIM_TAKE_OUT_ROD_WEST    2
#define ANIM_TAKE_OUT_ROD_EAST    3
#define ANIM_PUT_AWAY_ROD_SOUTH   4
#define ANIM_PUT_AWAY_ROD_NORTH   5
#define ANIM_PUT_AWAY_ROD_WEST    6
#define ANIM_PUT_AWAY_ROD_EAST    7
#define ANIM_HOOKED_POKEMON_SOUTH 8
#define ANIM_HOOKED_POKEMON_NORTH 9
#define ANIM_HOOKED_POKEMON_WEST  10
#define ANIM_HOOKED_POKEMON_EAST  11

// IDs for how NPCs that copy player movement should respond.
// Most go unused.
#define COPY_MOVE_NONE           0
#define COPY_MOVE_FACE           1
#define COPY_MOVE_WALK           2
#define COPY_MOVE_WALK_FAST      3
#define COPY_MOVE_WALK_FASTER    4
#define COPY_MOVE_SLIDE          5
#define COPY_MOVE_JUMP_IN_PLACE  6
#define COPY_MOVE_JUMP           7
#define COPY_MOVE_JUMP2          8
#define COPY_MOVE_EMPTY_1        9
#define COPY_MOVE_EMPTY_2       10

#endif // GUARD_CONSTANTS_EVENT_OBJECT_MOVEMENT_H

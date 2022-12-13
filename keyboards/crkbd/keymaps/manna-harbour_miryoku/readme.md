# build notes
build is hardcoded to use colemak for both primary and extra layers
primary uses CAGS (for mac) as home row modes
extra uses GACS (for windows) as home row modes

# build command:
qmk compile -c -kb crkbd -km manna-harbour_miryoku -e MIRYOKU_TAP=QWERTY

# for refreshing from latest master, the following needs to be updated:
1. the individual layers that were modified in custom_config.h in
    users/manna-harbour_miryoku/custom_config.h
2. refresh
    keyboards/crkbd/keymaps/manna-harbour_miryoku/config.h
    with
    layouts/community/split_3x6_3/manna-harbour_miryoku/config.h
3. refresh
    keyboards/crkbd/keymaps/manna-harbour_miryoku/keymap.c
    with
    layouts/community/split_3x6_3/manna-harbour_miryoku/keymap.c

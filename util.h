#ifndef BACKFS_UTIL_H
#define BACKFS_UTIL_H
/*
 * BackFS utility functions
 * Copyright (c) 2014 William R. Fraser
 */

char* areadlink(const char* path);

#define FREE(var) { free(var); var = NULL; }
#define COUNTOF(var) (sizeof(var) / sizeof(*var))

#endif //BACKFS_UTIL_H

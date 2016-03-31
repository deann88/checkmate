#ifndef CHECKMATE_CMESSAGES_H_
#define CHECKMATE_CMESSAGES_H_

#define USE_RINTERNALS
#include <R.h>
#include <Rinternals.h>

#define CMSGLEN 255
typedef struct {
    Rboolean ok;
    char msg[CMSGLEN];
} msg_t;

extern const msg_t MSGT;
extern const msg_t MSGF;
msg_t make_msg(const char *, ...);

#endif

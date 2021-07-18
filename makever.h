#ifndef H_MAKEVER
#define H_MAKEVER

#define ALPHA_RELEASE 0
#define RSVD1_RELEASE 1
#define BETA_RELEASE 2
#define RELEASE_CANDIDATE 3
#define STABLE_RELEASE 4
#define HOTFIX_RELEASE 5
#define LTS_RELEASE 6
#define FINAL_RELEASE 7

#define MAKEVER(major, minor, patch, release)\
  ((((major) & 0xFF) << 24) | (((minor) & 0xFF) << 16) |\
   (((patch) & 0x1FFF) << 3) | ((release) & 0x07))

#define MAJORVER(version) (((version) >> 24) & 0xFF)
#define MINORVER(version) (((version) >> 16) & 0xFF)
#define PATCHVER(version) (((version) >> 3) & 0x1FFF)
#define RELEASETYPE(version) ((version) & 0x7)

#endif

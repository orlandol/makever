#ifndef H_MAKEVER
#define H_MAKEVER

/*
 *  Version format Maj.Min.Patch declarations
 */
#define MAKEVER(major, minor, patch)\
  ((((major) & 0xFF) << 24) | (((minor) & 0xFF) << 16) |\
   ((patch) & 0xFFFF))

#define MAJORVER(version) (((version) >> 24) & 0xFF)
#define MINORVER(version) (((version) >> 16) & 0xFF)
#define PATCHVER(version) ((version) & 0xFFFF)

/*
 *  Version format Maj.Min.Patch.ReleaseType declarations
 */
#define EXPERIMENTAL_RELEASE 7
#define ALPHA_RELEASE 8
#define GAMMA_RELEASE 9
#define BETA_RELEASE 10
#define RELEASE_CANDIDATE 11
#define STABLE_RELEASE 12
#define HOTFIX_RELEASE 13
#define LTS_RELEASE 14
#define FINAL_RELEASE 15

#define MAKEVEREXT(major, minor, patch, release)\
  ((((major) & 0xFF) << 24) | (((minor) & 0xFF) << 16) |\
   (((patch) & 0x0FFF) << 4) | ((release) & 0x000F))

#define MAJORVEREXT(version) (((version) >> 24) & 0xFF)
#define MINORVEREXT(version) (((version) >> 16) & 0xFF)
#define PATCHVEREXT(version) (((version) >> 4) & 0x0FFF)
#define RELEASETYPEEXT(version) ((version) & 0x000F)

#endif

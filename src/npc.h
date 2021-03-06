/*
 * See Licensing and Copyright notice in naev.h
 */



#ifndef NPC_H
#  define NPC_H


#include "mission.h"
#include "opengl.h"


/*
 * Adding.
 */
unsigned int npc_add_mission( Mission *misn, const char *func, const char *name,
      int priority, const char *portrait, const char *desc, const char *background );
unsigned int npc_add_event( unsigned int evt, const char *func, const char *name,
      int priority, const char *portrait, const char *desc, const char *background );

/*
 * Removing.
 */
int npc_rm_event( unsigned int id, unsigned int evt );
int npc_rm_mission( unsigned int id, Mission *misn );
int npc_rm_parentEvent( unsigned int id );
int npc_rm_parentMission( Mission *misn );

/*
 * Control.
 */
void npc_sort (void);
void npc_generateMissions (void);
void npc_patchMission( Mission *misn );
void npc_clear (void);

/*
 * Land image array stuff.
 */
int npc_getArraySize (void);
const char *npc_getName( int i );
glTexture *npc_getBackground( int i );
glTexture *npc_getTexture( int i );
const char *npc_getDesc( int i );
int npc_isImportant( int i );
int npc_approach( int i );


#endif /* NPC_H */

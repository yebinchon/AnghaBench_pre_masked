
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int lua_State ;
typedef int input_item_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (char*,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;

void FUNC_1( vlc_object_t *VAR_22, lua_State *VAR_23,
                            input_item_t *VAR_24 )
{
    FUNC_0( VAR_23, -1, "title" ); if( FUNC_0( VAR_23, -1 ) && strcmp( FUNC_0( VAR_23, -1 ), "" ) ) { char *VAR_25 = strdup( FUNC_0( VAR_23, -1 ) ); FUNC_0( VAR_25 ); FUNC_0( VAR_22, "Title" ": %s", VAR_25 ); FUNC_0 ( VAR_24, VAR_25 ); FUNC_0( VAR_25 ); } FUNC_0( VAR_23, 1 );;
    FUNC_0( VAR_23, -1, "artist" ); if( FUNC_0( VAR_23, -1 ) && FUNC_0( FUNC_0( VAR_23, -1 ), "" ) ) { char *VAR_26 = FUNC_0( FUNC_0( VAR_23, -1 ) ); FUNC_0( VAR_26 ); FUNC_0( VAR_22, "Artist" ": %s", VAR_26 ); FUNC_0 ( VAR_24, VAR_26 ); FUNC_0( VAR_26 ); } FUNC_0( VAR_23, 1 );;
    FUNC_0( VAR_23, -1, "genre" ); if( FUNC_0( VAR_23, -1 ) && FUNC_0( FUNC_0( VAR_23, -1 ), "" ) ) { char *VAR_27 = FUNC_0( FUNC_0( VAR_23, -1 ) ); FUNC_0( VAR_27 ); FUNC_0( VAR_22, "Genre" ": %s", VAR_27 ); FUNC_0 ( VAR_24, VAR_27 ); FUNC_0( VAR_27 ); } FUNC_0( VAR_23, 1 );;
    FUNC_0( VAR_23, -1, "copyright" ); if( FUNC_0( VAR_23, -1 ) && FUNC_0( FUNC_0( VAR_23, -1 ), "" ) ) { char *VAR_28 = FUNC_0( FUNC_0( VAR_23, -1 ) ); FUNC_0( VAR_28 ); FUNC_0( VAR_22, "Copyright" ": %s", VAR_28 ); FUNC_0 ( VAR_24, VAR_28 ); FUNC_0( VAR_28 ); } FUNC_0( VAR_23, 1 );;
    FUNC_0( VAR_23, -1, "album" ); if( FUNC_0( VAR_23, -1 ) && FUNC_0( FUNC_0( VAR_23, -1 ), "" ) ) { char *VAR_29 = FUNC_0( FUNC_0( VAR_23, -1 ) ); FUNC_0( VAR_29 ); FUNC_0( VAR_22, "Album" ": %s", VAR_29 ); FUNC_0 ( VAR_24, VAR_29 ); FUNC_0( VAR_29 ); } FUNC_0( VAR_23, 1 );;
    FUNC_0( VAR_23, -1, "tracknum" ); if( FUNC_0( VAR_23, -1 ) && FUNC_0( FUNC_0( VAR_23, -1 ), "" ) ) { char *VAR_30 = FUNC_0( FUNC_0( VAR_23, -1 ) ); FUNC_0( VAR_30 ); FUNC_0( VAR_22, "TrackNum" ": %s", VAR_30 ); FUNC_0 ( VAR_24, VAR_30 ); FUNC_0( VAR_30 ); } FUNC_0( VAR_23, 1 );;
    FUNC_0( VAR_23, -1, "description" ); if( FUNC_0( VAR_23, -1 ) && FUNC_0( FUNC_0( VAR_23, -1 ), "" ) ) { char *VAR_31 = FUNC_0( FUNC_0( VAR_23, -1 ) ); FUNC_0( VAR_31 ); FUNC_0( VAR_22, "Description" ": %s", VAR_31 ); FUNC_0 ( VAR_24, VAR_31 ); FUNC_0( VAR_31 ); } FUNC_0( VAR_23, 1 );;
    FUNC_0( VAR_23, -1, "rating" ); if( FUNC_0( VAR_23, -1 ) && FUNC_0( FUNC_0( VAR_23, -1 ), "" ) ) { char *VAR_32 = FUNC_0( FUNC_0( VAR_23, -1 ) ); FUNC_0( VAR_32 ); FUNC_0( VAR_22, "Rating" ": %s", VAR_32 ); FUNC_0 ( VAR_24, VAR_32 ); FUNC_0( VAR_32 ); } FUNC_0( VAR_23, 1 );;
    FUNC_0( VAR_23, -1, "date" ); if( FUNC_0( VAR_23, -1 ) && FUNC_0( FUNC_0( VAR_23, -1 ), "" ) ) { char *VAR_33 = FUNC_0( FUNC_0( VAR_23, -1 ) ); FUNC_0( VAR_33 ); FUNC_0( VAR_22, "Date" ": %s", VAR_33 ); FUNC_0 ( VAR_24, VAR_33 ); FUNC_0( VAR_33 ); } FUNC_0( VAR_23, 1 );;
    FUNC_0( VAR_23, -1, "setting" ); if( FUNC_0( VAR_23, -1 ) && FUNC_0( FUNC_0( VAR_23, -1 ), "" ) ) { char *VAR_34 = FUNC_0( FUNC_0( VAR_23, -1 ) ); FUNC_0( VAR_34 ); FUNC_0( VAR_22, "Setting" ": %s", VAR_34 ); FUNC_0 ( VAR_24, VAR_34 ); FUNC_0( VAR_34 ); } FUNC_0( VAR_23, 1 );;
    FUNC_0( VAR_23, -1, "url" ); if( FUNC_0( VAR_23, -1 ) && FUNC_0( FUNC_0( VAR_23, -1 ), "" ) ) { char *VAR_35 = FUNC_0( FUNC_0( VAR_23, -1 ) ); FUNC_0( VAR_35 ); FUNC_0( VAR_22, "URL" ": %s", VAR_35 ); FUNC_0 ( VAR_24, VAR_35 ); FUNC_0( VAR_35 ); } FUNC_0( VAR_23, 1 );;
    FUNC_0( VAR_23, -1, "language" ); if( FUNC_0( VAR_23, -1 ) && FUNC_0( FUNC_0( VAR_23, -1 ), "" ) ) { char *VAR_36 = FUNC_0( FUNC_0( VAR_23, -1 ) ); FUNC_0( VAR_36 ); FUNC_0( VAR_22, "Language" ": %s", VAR_36 ); FUNC_0 ( VAR_24, VAR_36 ); FUNC_0( VAR_36 ); } FUNC_0( VAR_23, 1 );;
    FUNC_0( VAR_23, -1, "nowplaying" ); if( FUNC_0( VAR_23, -1 ) && FUNC_0( FUNC_0( VAR_23, -1 ), "" ) ) { char *VAR_37 = FUNC_0( FUNC_0( VAR_23, -1 ) ); FUNC_0( VAR_37 ); FUNC_0( VAR_22, "NowPlaying" ": %s", VAR_37 ); FUNC_0 ( VAR_24, VAR_37 ); FUNC_0( VAR_37 ); } FUNC_0( VAR_23, 1 );;
    FUNC_0( VAR_23, -1, "publisher" ); if( FUNC_0( VAR_23, -1 ) && FUNC_0( FUNC_0( VAR_23, -1 ), "" ) ) { char *VAR_38 = FUNC_0( FUNC_0( VAR_23, -1 ) ); FUNC_0( VAR_38 ); FUNC_0( VAR_22, "Publisher" ": %s", VAR_38 ); FUNC_0 ( VAR_24, VAR_38 ); FUNC_0( VAR_38 ); } FUNC_0( VAR_23, 1 );;
    FUNC_0( VAR_23, -1, "encodedby" ); if( FUNC_0( VAR_23, -1 ) && FUNC_0( FUNC_0( VAR_23, -1 ), "" ) ) { char *VAR_39 = FUNC_0( FUNC_0( VAR_23, -1 ) ); FUNC_0( VAR_39 ); FUNC_0( VAR_22, "EncodedBy" ": %s", VAR_39 ); FUNC_0 ( VAR_24, VAR_39 ); FUNC_0( VAR_39 ); } FUNC_0( VAR_23, 1 );;
    FUNC_0( VAR_23, -1, "arturl" ); if( FUNC_0( VAR_23, -1 ) && FUNC_0( FUNC_0( VAR_23, -1 ), "" ) ) { char *VAR_40 = FUNC_0( FUNC_0( VAR_23, -1 ) ); FUNC_0( VAR_40 ); FUNC_0( VAR_22, "ArtURL" ": %s", VAR_40 ); FUNC_0 ( VAR_24, VAR_40 ); FUNC_0( VAR_40 ); } FUNC_0( VAR_23, 1 );;
    FUNC_0( VAR_23, -1, "trackid" ); if( FUNC_0( VAR_23, -1 ) && FUNC_0( FUNC_0( VAR_23, -1 ), "" ) ) { char *VAR_41 = FUNC_0( FUNC_0( VAR_23, -1 ) ); FUNC_0( VAR_41 ); FUNC_0( VAR_22, "TrackID" ": %s", VAR_41 ); FUNC_0 ( VAR_24, VAR_41 ); FUNC_0( VAR_41 ); } FUNC_0( VAR_23, 1 );;
    FUNC_0( VAR_23, -1, "director" ); if( FUNC_0( VAR_23, -1 ) && FUNC_0( FUNC_0( VAR_23, -1 ), "" ) ) { char *VAR_42 = FUNC_0( FUNC_0( VAR_23, -1 ) ); FUNC_0( VAR_42 ); FUNC_0( VAR_22, "Director" ": %s", VAR_42 ); FUNC_0 ( VAR_24, VAR_42 ); FUNC_0( VAR_42 ); } FUNC_0( VAR_23, 1 );;
    FUNC_0( VAR_23, -1, "season" ); if( FUNC_0( VAR_23, -1 ) && FUNC_0( FUNC_0( VAR_23, -1 ), "" ) ) { char *VAR_43 = FUNC_0( FUNC_0( VAR_23, -1 ) ); FUNC_0( VAR_43 ); FUNC_0( VAR_22, "Season" ": %s", VAR_43 ); FUNC_0 ( VAR_24, VAR_43 ); FUNC_0( VAR_43 ); } FUNC_0( VAR_23, 1 );;
    FUNC_0( VAR_23, -1, "episode" ); if( FUNC_0( VAR_23, -1 ) && FUNC_0( FUNC_0( VAR_23, -1 ), "" ) ) { char *VAR_44 = FUNC_0( FUNC_0( VAR_23, -1 ) ); FUNC_0( VAR_44 ); FUNC_0( VAR_22, "Episode" ": %s", VAR_44 ); FUNC_0 ( VAR_24, VAR_44 ); FUNC_0( VAR_44 ); } FUNC_0( VAR_23, 1 );;
    FUNC_0( VAR_23, -1, "show_name" ); if( FUNC_0( VAR_23, -1 ) && FUNC_0( FUNC_0( VAR_23, -1 ), "" ) ) { char *VAR_45 = FUNC_0( FUNC_0( VAR_23, -1 ) ); FUNC_0( VAR_45 ); FUNC_0( VAR_22, "ShowName" ": %s", VAR_45 ); FUNC_0 ( VAR_24, VAR_45 ); FUNC_0( VAR_45 ); } FUNC_0( VAR_23, 1 );;
    FUNC_0( VAR_23, -1, "actors" ); if( FUNC_0( VAR_23, -1 ) && FUNC_0( FUNC_0( VAR_23, -1 ), "" ) ) { char *VAR_46 = FUNC_0( FUNC_0( VAR_23, -1 ) ); FUNC_0( VAR_46 ); FUNC_0( VAR_22, "Actors" ": %s", VAR_46 ); FUNC_0 ( VAR_24, VAR_46 ); FUNC_0( VAR_46 ); } FUNC_0( VAR_23, 1 );;
}

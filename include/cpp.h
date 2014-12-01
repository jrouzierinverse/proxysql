//#ifdef __cplusplus
#include "mysql_thread.h"
#include "mysql_session.h"
#include "mysql_backend.h"
#include "mysql_data_stream.h"
#include "shared_query_cache.h"
#include "query_cache.hpp"
//#include "local_query_cache.h"
#include "mysql_connection.h"
#include "sqlite3db.h"
#include "mysql_connection_pool.h"
#include "simple_kv.h"
#include "kv_btree_array.hpp"
#include "advanced_kv.h"
#include "gen_utils.h"
#include "MySQL_Protocol.h"
#include "MySQL_Authentication.hpp"
#include "fileutils.hpp"
#include "configfile.hpp"
#include "query_processor.h"
#include "proxysql_admin.h"
//#include "proxysql_glovars.hpp"
//#endif /* __cplusplus */
/* Copyright (C) 2014 mod_auth_gssapi contributors - See COPYING for (C) terms */

struct mag_req_cfg;
struct mag_conn;

void mag_post_config_session(void);
void mag_check_session(struct mag_req_cfg *cfg, struct mag_conn **conn);
void mag_attempt_session(struct mag_req_cfg *cfg, struct mag_conn *mc);
bool mag_basic_check(struct mag_req_cfg *cfg, struct mag_conn *mc,
                     gss_buffer_desc user, gss_buffer_desc pwd);
void mag_basic_cache(struct mag_req_cfg *cfg, struct mag_conn *mc,
                     gss_buffer_desc user, gss_buffer_desc pwd);

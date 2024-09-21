#pragma once

#include <string>
#include <unordered_map>

#include <saucer/webview.hpp>

#include "404.html.hpp"
#include "AlciaCropped.jpg.hpp"
#include "favicon.ico.hpp"
#include "index.html.hpp"
#include "index.txt.hpp"
#include "logo.svg.hpp"
#include "_next/static/5AqZYqlsP6HDT35SjCJJm/_buildManifest.js.hpp"
#include "_next/static/5AqZYqlsP6HDT35SjCJJm/_ssgManifest.js.hpp"
#include "_next/static/chunks/23-7e3f169199317149.js.hpp"
#include "_next/static/chunks/app/layout-c1f6236d5c89cc59.js.hpp"
#include "_next/static/chunks/app/page-c3cf117da1804662.js.hpp"
#include "_next/static/chunks/app/_not-found/page-7a9505b7a5ba4238.js.hpp"
#include "_next/static/chunks/fd9d1056-be48aeae6e94b8d1.js.hpp"
#include "_next/static/chunks/framework-f66176bb897dc684.js.hpp"
#include "_next/static/chunks/main-4bf6a7d8c2e2f216.js.hpp"
#include "_next/static/chunks/main-app-cc4909f79e204e1d.js.hpp"
#include "_next/static/chunks/pages/_app-6a626577ffa902a4.js.hpp"
#include "_next/static/chunks/pages/_error-1be831200e60c5c0.js.hpp"
#include "_next/static/chunks/polyfills-78c92fac7aa8fdd8.js.hpp"
#include "_next/static/chunks/webpack-70ba2d17069729a6.js.hpp"
#include "_next/static/css/24b743590b183183.css.hpp"
#include "_next/static/css/bbc2837c75ec24e2.css.hpp"
#include "_next/static/css/fd97794f226f8bff.css.hpp"
#include "_next/static/media/b1355d6ff97b369f-s.p.ttf.hpp"
#include "_next/static/media/ce19f3e9729e675c-s.p.ttf.hpp"

namespace saucer::embedded
{
    inline auto all()
    {
        std::unordered_map<std::string, embedded_file> rtn;

        rtn.emplace("404.html", embedded_file{saucer::stash<>::view(____html), "text/html"});
        rtn.emplace("AlciaCropped.jpg", embedded_file{saucer::stash<>::view(AlciaCropped_jpg), "image/jpeg"});
        rtn.emplace("favicon.ico", embedded_file{saucer::stash<>::view(favicon_ico), "image/vnd.microsoft.icon"});
        rtn.emplace("index.html", embedded_file{saucer::stash<>::view(index_html), "text/html"});
        rtn.emplace("index.txt", embedded_file{saucer::stash<>::view(index_txt), "text/plain"});
        rtn.emplace("logo.svg", embedded_file{saucer::stash<>::view(logo_svg), "image/svg+xml"});
        rtn.emplace("_next/static/5AqZYqlsP6HDT35SjCJJm/_buildManifest.js", embedded_file{saucer::stash<>::view(_next_static__AqZYqlsP_HDT__SjCJJm__buildManifest_js), "application/javascript"});
        rtn.emplace("_next/static/5AqZYqlsP6HDT35SjCJJm/_ssgManifest.js", embedded_file{saucer::stash<>::view(_next_static__AqZYqlsP_HDT__SjCJJm__ssgManifest_js), "application/javascript"});
        rtn.emplace("_next/static/chunks/23-7e3f169199317149.js", embedded_file{saucer::stash<>::view(_next_static_chunks_____e_f_____________js), "application/javascript"});
        rtn.emplace("_next/static/chunks/app/layout-c1f6236d5c89cc59.js", embedded_file{saucer::stash<>::view(_next_static_chunks_app_layout_c_f____d_c__cc___js), "application/javascript"});
        rtn.emplace("_next/static/chunks/app/page-c3cf117da1804662.js", embedded_file{saucer::stash<>::view(_next_static_chunks_app_page_c_cf___da________js), "application/javascript"});
        rtn.emplace("_next/static/chunks/app/_not-found/page-7a9505b7a5ba4238.js", embedded_file{saucer::stash<>::view(_next_static_chunks_app__not_found_page__a____b_a_ba_____js), "application/javascript"});
        rtn.emplace("_next/static/chunks/fd9d1056-be48aeae6e94b8d1.js", embedded_file{saucer::stash<>::view(_next_static_chunks_fd_d_____be__aeae_e__b_d__js), "application/javascript"});
        rtn.emplace("_next/static/chunks/framework-f66176bb897dc684.js", embedded_file{saucer::stash<>::view(_next_static_chunks_framework_f_____bb___dc____js), "application/javascript"});
        rtn.emplace("_next/static/chunks/main-4bf6a7d8c2e2f216.js", embedded_file{saucer::stash<>::view(_next_static_chunks_main__bf_a_d_c_e_f____js), "application/javascript"});
        rtn.emplace("_next/static/chunks/main-app-cc4909f79e204e1d.js", embedded_file{saucer::stash<>::view(_next_static_chunks_main_app_cc____f__e___e_d_js), "application/javascript"});
        rtn.emplace("_next/static/chunks/pages/_app-6a626577ffa902a4.js", embedded_file{saucer::stash<>::view(_next_static_chunks_pages__app__a______ffa___a__js), "application/javascript"});
        rtn.emplace("_next/static/chunks/pages/_error-1be831200e60c5c0.js", embedded_file{saucer::stash<>::view(_next_static_chunks_pages__error__be______e__c_c__js), "application/javascript"});
        rtn.emplace("_next/static/chunks/polyfills-78c92fac7aa8fdd8.js", embedded_file{saucer::stash<>::view(_next_static_chunks_polyfills___c__fac_aa_fdd__js), "application/javascript"});
        rtn.emplace("_next/static/chunks/webpack-70ba2d17069729a6.js", embedded_file{saucer::stash<>::view(_next_static_chunks_webpack___ba_d________a__js), "application/javascript"});
        rtn.emplace("_next/static/css/24b743590b183183.css", embedded_file{saucer::stash<>::view(_next_static_css___b______b_______css), "text/css"});
        rtn.emplace("_next/static/css/bbc2837c75ec24e2.css", embedded_file{saucer::stash<>::view(_next_static_css_bbc____c__ec__e__css), "text/css"});
        rtn.emplace("_next/static/css/fd97794f226f8bff.css", embedded_file{saucer::stash<>::view(_next_static_css_fd_____f___f_bff_css), "text/css"});
        rtn.emplace("_next/static/media/b1355d6ff97b369f-s.p.ttf", embedded_file{saucer::stash<>::view(_next_static_media_b____d_ff__b___f_s_p_ttf), "font/ttf"});
        rtn.emplace("_next/static/media/ce19f3e9729e675c-s.p.ttf", embedded_file{saucer::stash<>::view(_next_static_media_ce__f_e____e___c_s_p_ttf), "font/ttf"});

        return rtn;
    }
} // namespace saucer::embedded

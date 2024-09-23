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
#include "_next/static/chunks/23-27c3037e8b778bed.js.hpp"
#include "_next/static/chunks/9c4e2130-f7aaa7e9d8159c7e.js.hpp"
#include "_next/static/chunks/app/layout-c1f6236d5c89cc59.js.hpp"
#include "_next/static/chunks/app/page-de0d6dc814ba394c.js.hpp"
#include "_next/static/chunks/app/_not-found/page-94c683a891433c6f.js.hpp"
#include "_next/static/chunks/fd9d1056-62aaf4b921c84028.js.hpp"
#include "_next/static/chunks/framework-f66176bb897dc684.js.hpp"
#include "_next/static/chunks/main-4bf6a7d8c2e2f216.js.hpp"
#include "_next/static/chunks/main-app-cc4909f79e204e1d.js.hpp"
#include "_next/static/chunks/pages/_app-6a626577ffa902a4.js.hpp"
#include "_next/static/chunks/pages/_error-1be831200e60c5c0.js.hpp"
#include "_next/static/chunks/polyfills-78c92fac7aa8fdd8.js.hpp"
#include "_next/static/chunks/webpack-657fc0bfca26e05d.js.hpp"
#include "_next/static/css/2075ce7c2ff51b5b.css.hpp"
#include "_next/static/css/29f1aabbafd30e49.css.hpp"
#include "_next/static/css/bbc2837c75ec24e2.css.hpp"
#include "_next/static/css/f53fe17345d86589.css.hpp"
#include "_next/static/media/b1355d6ff97b369f-s.p.ttf.hpp"
#include "_next/static/media/ce19f3e9729e675c-s.p.ttf.hpp"
#include "_next/static/NR1p289SSaOCFnFFphmy6/_buildManifest.js.hpp"
#include "_next/static/NR1p289SSaOCFnFFphmy6/_ssgManifest.js.hpp"

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
        rtn.emplace("_next/static/chunks/23-27c3037e8b778bed.js", embedded_file{saucer::stash<>::view(_next_static_chunks______c____e_b___bed_js), "application/javascript"});
        rtn.emplace("_next/static/chunks/9c4e2130-f7aaa7e9d8159c7e.js", embedded_file{saucer::stash<>::view(_next_static_chunks__c_e_____f_aaa_e_d____c_e_js), "application/javascript"});
        rtn.emplace("_next/static/chunks/app/layout-c1f6236d5c89cc59.js", embedded_file{saucer::stash<>::view(_next_static_chunks_app_layout_c_f____d_c__cc___js), "application/javascript"});
        rtn.emplace("_next/static/chunks/app/page-de0d6dc814ba394c.js", embedded_file{saucer::stash<>::view(_next_static_chunks_app_page_de_d_dc___ba___c_js), "application/javascript"});
        rtn.emplace("_next/static/chunks/app/_not-found/page-94c683a891433c6f.js", embedded_file{saucer::stash<>::view(_next_static_chunks_app__not_found_page___c___a______c_f_js), "application/javascript"});
        rtn.emplace("_next/static/chunks/fd9d1056-62aaf4b921c84028.js", embedded_file{saucer::stash<>::view(_next_static_chunks_fd_d_______aaf_b___c______js), "application/javascript"});
        rtn.emplace("_next/static/chunks/framework-f66176bb897dc684.js", embedded_file{saucer::stash<>::view(_next_static_chunks_framework_f_____bb___dc____js), "application/javascript"});
        rtn.emplace("_next/static/chunks/main-4bf6a7d8c2e2f216.js", embedded_file{saucer::stash<>::view(_next_static_chunks_main__bf_a_d_c_e_f____js), "application/javascript"});
        rtn.emplace("_next/static/chunks/main-app-cc4909f79e204e1d.js", embedded_file{saucer::stash<>::view(_next_static_chunks_main_app_cc____f__e___e_d_js), "application/javascript"});
        rtn.emplace("_next/static/chunks/pages/_app-6a626577ffa902a4.js", embedded_file{saucer::stash<>::view(_next_static_chunks_pages__app__a______ffa___a__js), "application/javascript"});
        rtn.emplace("_next/static/chunks/pages/_error-1be831200e60c5c0.js", embedded_file{saucer::stash<>::view(_next_static_chunks_pages__error__be______e__c_c__js), "application/javascript"});
        rtn.emplace("_next/static/chunks/polyfills-78c92fac7aa8fdd8.js", embedded_file{saucer::stash<>::view(_next_static_chunks_polyfills___c__fac_aa_fdd__js), "application/javascript"});
        rtn.emplace("_next/static/chunks/webpack-657fc0bfca26e05d.js", embedded_file{saucer::stash<>::view(_next_static_chunks_webpack____fc_bfca__e__d_js), "application/javascript"});
        rtn.emplace("_next/static/css/2075ce7c2ff51b5b.css", embedded_file{saucer::stash<>::view(_next_static_css_____ce_c_ff__b_b_css), "text/css"});
        rtn.emplace("_next/static/css/29f1aabbafd30e49.css", embedded_file{saucer::stash<>::view(_next_static_css___f_aabbafd__e___css), "text/css"});
        rtn.emplace("_next/static/css/bbc2837c75ec24e2.css", embedded_file{saucer::stash<>::view(_next_static_css_bbc____c__ec__e__css), "text/css"});
        rtn.emplace("_next/static/css/f53fe17345d86589.css", embedded_file{saucer::stash<>::view(_next_static_css_f__fe_____d______css), "text/css"});
        rtn.emplace("_next/static/media/b1355d6ff97b369f-s.p.ttf", embedded_file{saucer::stash<>::view(_next_static_media_b____d_ff__b___f_s_p_ttf), "font/ttf"});
        rtn.emplace("_next/static/media/ce19f3e9729e675c-s.p.ttf", embedded_file{saucer::stash<>::view(_next_static_media_ce__f_e____e___c_s_p_ttf), "font/ttf"});
        rtn.emplace("_next/static/NR1p289SSaOCFnFFphmy6/_buildManifest.js", embedded_file{saucer::stash<>::view(_next_static_NR_p___SSaOCFnFFphmy___buildManifest_js), "application/javascript"});
        rtn.emplace("_next/static/NR1p289SSaOCFnFFphmy6/_ssgManifest.js", embedded_file{saucer::stash<>::view(_next_static_NR_p___SSaOCFnFFphmy___ssgManifest_js), "application/javascript"});

        return rtn;
    }
} // namespace saucer::embedded

function mamicode_adload(ad_id) {
    var str = '';
    if (ad_id == 'top_memu') {
        str = '<div style="margin: 0px auto; width:1000px;" class="margintop10bottom10">'+
                '    <script type="text/javascript">'+
                '        var cpro_id = "u2192072";'+
                '        (window["cproStyleApi"] = window["cproStyleApi"] || {})[cpro_id] = { at: "3", rsi0: "1000", rsi1: "120", pat: "6", tn: "baiduCustNativeAD", rss1: "#FFFFFF", conBW: "1", adp: "1", ptt: "0", titFF: "%E5%BE%AE%E8%BD%AF%E9%9B%85%E9%BB%91", titFS: "14", rss2: "#000000", titSU: "0", ptbg: "90", piw: "0", pih: "0", ptp: "0" }'+
                '    <\/script>'+
                '    <script src="http://cpro.baidustatic.com/cpro/ui/c.js" type="text/javascript"><\/script>'+
                '<\/div>';
    }
    else if (ad_id == 'title_before') {
        str = '<div>'+
                '    <div class="divfloatleft">'+
                '        <script async src="//pagead2.googlesyndication.com/pagead/js/adsbygoogle.js"><\/script>'+
                '        <!-- mamicode-infodetail-336x280-1 -->'+
                '        <ins class="adsbygoogle" style="display: inline-block; width: 336px; height: 280px"'+
                '            data-ad-client="ca-pub-8616102841876629" data-ad-slot="6851602680"><\/ins>'+
                '        <script>'+
                '            (adsbygoogle = window.adsbygoogle || []).push({});'+
                '        <\/script>'+
                '    <\/div>'+
                '    <div class="divfloatright">'+
                '        <script type="text/javascript">'+
                '            /*ma-336x280-1*/'+
                '            var cpro_id = "u2910326";'+
                '        <\/script>'+
                '        <script type="text/javascript" src="http://cpro.baidustatic.com/cpro/ui/c.js"><\/script>'+
                '    <\/div>'+
                '    <div class="divfloatclear">'+
                '    <\/div>'+
                '<\/div>';
    }
    else if (ad_id == 'content_before') {
        str = '<div class="margintop20bottom20">' +
                '<script async src="//pagead2.googlesyndication.com/pagead/js/adsbygoogle.js"><\/script>' +
                '<ins class="adsbygoogle"' +
                '     style="display:block; text-align:center;"' +
                '     data-ad-format="fluid"' +
                '     data-ad-layout="in-article"' +
                '     data-ad-client="ca-pub-8616102841876629"' +
                '     data-ad-slot="3249086282"><\/ins>' +
                '<script>' +
                '     (adsbygoogle = window.adsbygoogle || []).push({});' +
                '<\/script>'+
                '<\/div>';
    }
    else if (ad_id == 'content_after') {
        str = '<div class="margintop20">'+
                '    <div class="divfloatleft">'+
                '        <script async src="//pagead2.googlesyndication.com/pagead/js/adsbygoogle.js"><\/script>'+
                '        <!-- mamicode-infodetail-336x280-2 -->'+
                '        <ins class="adsbygoogle" style="display: inline-block; width: 336px; height: 280px"'+
                '            data-ad-client="ca-pub-8616102841876629" data-ad-slot="8328335888"><\/ins>'+
                '        <script>'+
                '            (adsbygoogle = window.adsbygoogle || []).push({});'+
                '        <\/script>'+
                '    <\/div>'+
                '    <div class="divfloatright">'+
                '        <script type="text/javascript">'+
                '            /*ma-336x280-2*/'+
                '            var cpro_id = "u2910327";'+
                '        <\/script>'+
                '        <script type="text/javascript" src="http://cpro.baidustatic.com/cpro/ui/c.js"><\/script>'+
                '    <\/div>'+
                '    <div class="divfloatclear">'+
                '    <\/div>'+
                '<\/div>';
    }
    else if (ad_id == 'content_bottom') {
        str = '<div class="margintop20">'+
                '    <script type="text/javascript">'+
                '        /*mamicode-bottom-680x250*/'+
                '        var cpro_id = "u2811621";'+
                '    <\/script>'+
                '    <script type="text/javascript" src="http://cpro.baidustatic.com/cpro/ui/c.js"><\/script>'+
                '<\/div>' +
                '<div class="divtextaligncenter margintop20">' +
                '    <script type="text/javascript">'+
                '        /*mamicode-infodetail-title-top-680x250*/'+
                '        var cpro_id = "u2860054";'+
                '    <\/script>'+
                '    <script src="http://cpro.baidustatic.com/cpro/ui/c.js" type="text/javascript"><\/script>'+
                '<\/div>';
    }
    else if (ad_id == 'right_top') {
        str = '<div class="paddingbottom10">'+
                '    <script async src="//pagead2.googlesyndication.com/pagead/js/adsbygoogle.js"><\/script>'+
                '    <!-- 1-mamicode-right-300x600 -->'+
                '    <ins class="adsbygoogle" style="display: inline-block; width: 300px; height: 600px"'+
                '        data-ad-client="ca-pub-8616102841876629" data-ad-slot="8947049888"><\/ins>'+
                '    <script>'+
                '        (adsbygoogle = window.adsbygoogle || []).push({});'+
                '    <\/script>'+
                '<\/div>';
    }
    else if (ad_id == 'right_bottom') {
        str = '<div id="xuanting" class="width300px margintop5">'+
                '    <script async src="//pagead2.googlesyndication.com/pagead/js/adsbygoogle.js"><\/script>'+
                '    <!-- mamicode-right-xuanting-300x600 -->'+
                '    <ins class="adsbygoogle" style="display: inline-block; width: 300px; height: 600px"'+
                '        data-ad-client="ca-pub-8616102841876629" data-ad-slot="4406515082"><\/ins>'+
                '    <script>'+
                '        (adsbygoogle = window.adsbygoogle || []).push({});'+
                '    <\/script>'+
                '<\/div>';
    }
    else if (ad_id == 'bottom') {
        str = '';
    }
    document.write(str);
}
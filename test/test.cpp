
#include <html5.hpp>

extern const char * test_page;

int main()
{

	html::dom cu_page;

	cu_page.append_partial_html(test_page);

	assert( cu_page["div!\"ptn xg2\""].to_plain_text() == "本版主要交流Linux/Unix平台下的C/C++开发，同时提供最全面的C语言及C++编程培训及相关的信息、技术以及相关资料的下载。" );

}

const char * test_page = R"dddddddddddddd(<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=gbk" />
<title>C/C++-ChinaUnix.net</title>
<meta name="google-site-verification" content="OJoEeACa37Td5C_TevGy7D9GrG9Pe407duCwm81ra6g" />
<meta name="description" content="本版主要交流Linux/Unix平台下的C/C++开发，同时提供最全面的C语言及C++编程培训及相关的信息、技术以及相关资料的下载。 " />
<meta name="author" content="Discuz! Team and Comsenz UI Team" />
<meta name="copyright" content="2001-2011 Comsenz Inc." />
<meta name="MSSmartTagsPreventParsing" content="True" />
<meta http-equiv="MSThemeCompatible" content="Yes" />
<base href="http://bbs.chinaunix.net/" /><link rel="stylesheet" type="text/css" href="data/cache/style_3_common.css?SLJ" /><link rel="stylesheet" type="text/css" href="data/cache/style_3_forum_forumdisplay.css?SLJ" /><script type="text/javascript">var STYLEID = '3', STATICURL = 'static/', IMGDIR = 'http://cu.img168.net/static/image/common/', VERHASH = 'SLJ', charset = 'gbk', discuz_uid = '0', cookiepre = 'ndfU_81a3_', cookiedomain = '.chinaunix.net', cookiepath = '/', showusercard = '1', attackevasive = '0', disallowfloat = 'login|newthread|reply|tradeorder|activity|debate|nav|usergroups|task', creditnotice = '', defaultstyle = '', REPORTURL = 'aHR0cDovL2Jicy5jaGluYXVuaXgubmV0L2ZvcnVtLTIzLTEuaHRtbA==', SITEURL = 'http://bbs.chinaunix.net/', JSPATH = 'static/js/';</script>

<script src="static/js/common.js?SLJ" type="text/javascript"></script>
<!-- 2014 -->
<script type='text/javascript' src='http://168.it168.com/a/h599.js'></script>
<script type="text/javascript">
var jq = jQuery.noConflict();
</script>

<meta name="application-name" content="ChinaUnix.net" />
<meta name="msapplication-tooltip" content="ChinaUnix.net" />
<meta name="msapplication-task" content="name=论坛;action-uri=http://bbs.chinaunix.net/forum.php;icon-uri=http://bbs.chinaunix.net/http://cu.img168.net/static/image/common//bbs.ico" />
<link rel="archives" title="ChinaUnix.net" href="http://bbs.chinaunix.net/archiver/" />
<link rel="alternate" type="application/rss+xml" title="ChinaUnix.net - " href="http://bbs.chinaunix.net/forum.php?mod=rss&fid=23&amp;auth=0" />
<link rel="stylesheet" id="css_widthauto" type="text/css" href="data/cache/style_3_widthauto.css?SLJ" />
<script type="text/javascript">HTMLNODE.className += ' widthauto'</script>
<script src="static/js/forum.js?SLJ" type="text/javascript" charset=gbk></script>
</head>
<body id="nv_forum" class="pg_forumdisplay">
<div id="append_parent"></div><div id="ajaxwaitid"></div>
<!-- 自定义 -->
<!--头-->
<!--广告位置名称：首页通栏 -->
<div id="ADV_13039"><script>LG('ADV_13039')</script></div>
<!--2011.12.1修改 大版宽屏显示 但是莫名其妙设置中的用户组也宽屏了，打印了下gid为28.暂时不清楚为什么 -->
<div class="wp head_top">
<table width="100%" cellspacing="0" cellpadding="0" border="0"  align="left">
<tr>
<td>
<a href="member.php?mod=logging&amp;action=login&amp;logsubmit=yes"><img src="http://www.chinaunix.net/images_new/login.gif"></img></a>
&nbsp;&nbsp;<a href="http://u.it168.com/findPassword?returnUrl=http://bbs.chinaunix.net/home.php?mod=spacecp">忘记密码</a>
&nbsp;&nbsp;<a href="member.php?mod=register.php">免费注册</a>
</td>
<td align="right">
<a href="http://bbs.chinaunix.net/listthread.php">查看新帖</a> |
<a href="http://www.chinaunix.net/jh/"><font color="red">论坛精华区</font></a>
</td>
</tr>
<tr><td height="1" colspan="3" style="background-color:#000"></td></tr>
</table>
</div>
<div id="hd">
<div class="wp" >
<!--LOGO和banner  -->
<table width="100%"  style="clear: both;height:90px">
<tr>
<td style="padding:0">
<h1>
<!--2011.12.27修改只有首页去www其他去bbs-->
<a href="http://bbs.chinaunix.net" title="ChinaUnix.net"><img src="http://cu.img168.net/static/image/common//logo.gif" alt="ChinaUnix.net" border="0" /></a>
</h1>
</td>
<td style="padding:0" align="center">
<!--不同页面广告位 -->
<div id="ADV_18508" style="display:inline;"><script>LG('ADV_18508')</script></div>

</td>
<!--2014.07.30添加广告位ADV_20649-->
<td style="padding:0" align="center">
<div id="ADV_20649" style="display:inline;"><script>LG('ADV_20649')</script></div>
</td>
</tr>
</table>
<!--<div id="nv">
<a href="javascript:;" id="qmenu" onmouseover="showMenu({'ctrlid':'qmenu','pos':'34!','ctrlclass':'a','duration':2});">快捷导航</a>
<ul> --><!-- <li id="mn_Ne30e" ><a href="plugin.php?id=auction" hidefocus="true" title="Auction"  >竞拍<span>Auction</span></a></li> --><!-- <li id="mn_N2ddf" ><a href="plugin.php?id=itpub_medal:medal_shop" hidefocus="true"  >商店</a></li> --><!-- <li id="mn_forum" ><a href="forum.php" hidefocus="true" title="BBS"  >论坛<span>BBS</span></a></li> --><!-- <li id="mn_userapp" ><a href="userapp.php" hidefocus="true" title="Manyou"  >应用<span>Manyou</span></a></li> --><!-- <li id="mn_N12a7" ><a href="misc.php?mod=ranklist" hidefocus="true" title="Ranklist"  >排行榜<span>Ranklist</span></a></li> --><!--</ul>
</div> -->
<div id="mu" class="cl">
</div><!--搜索框去掉20111024 -->
</div>
</div>
<!--2011.11.30如果是大版则宽屏显示 -->
<div id="wp" class="wp" >

<table width="100%" cellspacing="0" cellpadding="0" border="0" align="center" style="background:url(static/image/common/bg_menu_top.gif)">
<tbody>
<tr><td height="2" colspan="2"></td></tr>
<tr>
<td width="*" valign="center" align="left">&nbsp;
<font color="#666666"><strong>平台</strong></font>：
<a target="_blank" class="title2" href="http://bbs.chinaunix.net/"><font color="#5B7DB3">论坛</font></a>
<a target="_blank" class="title2" href="http://blog.chinaunix.net/"><font color="#5B7DB3">博客</font></a>
<a target="_blank" class="title2" href="http://u.it168.com/vip/"><font color="#FF0000">认证专区</font></a>
<a target="_blank" class="title2" href="http://www.chinaunix.net/talk"><font color="#FF0000">大话IT</font></a>
<a target="_blank" class="title2" href="http://edu.chinaunix.net/"><font color="#FF0000">视频</font></a>
<a target="_blank" class="title2" href="http://bbs.chinaunix.net/plugin.php?id=itpub_medal:medal_shop"><font color="#FF0000">徽章
</font></a>
<a target="_blank" class="title2" href="http://wenku.it168.com/"><font color="#5B7DB3">文库</font></a>
<a target="_blank" class="title2" href="http://www.it168.com/itclub/"><font color="#5B7DB3">沙龙</font></a>
<a target="_blank" class="title2" href="http://selftest.chinaunix.net/"><font color="#5B7DB3">自测</font></a>
<a target="_blank" class="title2" href="http://download.chinaunix.net/"><font color="#5B7DB3">下载</font></a>
</a><font color="#666666"><strong>频道</strong></font>：
<a target="_blank" class="title2" href="http://www.chinaunix.net/ops/"><font color="#5B7DB3">自动化运维</font></a>
<a target="_blank" class="title2" href="http://www.chinaunix.net/virtual/"><font color="#5B7DB3">虚拟化</font></a>

<a target="_blank" class="title2" href="http://www.chinaunix.net/stor/"><font color="#5B7DB3">储存备份</font></a>
<a target="_blank" class="title2" href="http://www.chinaunix.net/cpp/"><font color="#5B7DB3">C/C++</font></a>
<a target="_blank" class="title2" href="http://www.chinaunix.net/php/"><font color="#5B7DB3">PHP</font></a>
<a target="_blank" class="title2" href="http://www.chinaunix.net/mysql/"><font color="#5B7DB3">MySQL</font></a>
<a target="_blank" class="title2" href="http://www.chinaunix.net/embedded/"><font color="#5B7DB3">嵌入式</font></a>
<a target="_blank" class="title2" href="http://www.chinaunix.net/linux/"><font color="#5B7DB3">Linux系统</font></a>
</td>
<td>
<form id="scbar_form" method="post" autocomplete="off" onSubmit="searchFocus($('scbar_txt'))" action="search.php?searchsubmit=yes" target="_blank">
<!--<form target="_blank" method="get" action="http://search.chinaunix.net/bbs.php">
<input type="text" name=q  size="15" maxlength="20" style="width:60px">
<input type="hidden" name="title" value="fulltext">
<input type="hidden" name="st" value="title">
<input type="hidden" name="bbs" value="1">
<input type="hidden" name="forums" value="all">-->
<input type="text" name="srchtxt" id="scbar_txt" autocomplete="off" style="width:80px">
<input type="hidden" name="mod" id="scbar_mod" value="forum" />
<input type="hidden" name="formhash" value="26eba110" />
<input type="hidden" name="srchtype" value="title" />
<input type="hidden" name="srhfid" value="23" id="dzsearchforumid" />
<input type="hidden" name="srhlocality" value="forum::forumdisplay" />
<input type="hidden" name="source" value="discuz" />
<input type="hidden" name="fId" value=""  id="cloudsearchforumId" />
<input type="hidden" name="q" id="cloudsearchquery" value="" />
<input type="submit" value="搜索">
</form>
</td>
</tr>
<tr><td height="2" colspan="2"></td></tr>
</tbody>
</table><style id="diy_style" type="text/css"></style>
<!--[diy=diynavtop]--><div id="diynavtop" class="area"></div><!--[/diy]-->

<div style="width:100%;height:auto"><table cellpadding="0" cellspacing="1" class="tab30"><tr><th width="20%"><a href="forummodule-5-0-1.html" target="_blank">最新活动</a></th><th width="20%"><a href="forummodule-7-23-1.html" target="_blank">本版热门话题</a></th><th width="20%"><a href="forummodule-8-23-1.html" target="_blank">本版精华</a></th><th width="20%"><a href="http://ask.chinaunix.net" target="_blank">热门问答</a></th><th width="20%"><a href="http://blog.chinaunix.net/" target="_blank">博客热门</a></th></tr><tr><td valign="top"><ul><li><div>·<a href="thread-4169617-1-1.html" title="【大话IT】国产操作系统与应用生态圈：鸡生蛋还是蛋生鸡？" target="_blank">【大话IT】国产操作系统与应用生态圈：鸡生蛋还是蛋生鸡？</a></div></li><li><div>·<a href="thread-4168766-1-1.html" title="高并发Oracle数据库系统的架构与设计经验谈，欢迎参与！" target="_blank">高并发Oracle数据库系统的架构与设计经验谈，欢迎参与！</a></div></li><li><div>·<a href="thread-4157502-1-1.html" title="HP Helion在Openstack社区异军突起！能否复制IBM投资Linux的奇迹？" target="_blank">HP Helion在Openstack社区异军突起！能否复制IBM投资Linux的奇迹？</a></div></li><li><div>·<a href="thread-4167968-1-1.html" title="如何设计好软件的API" target="_blank">如何设计好软件的API</a></div></li><li><div>·<a href="thread-4167970-1-1.html" title="Golang越来越火了 您还不赶紧开始看看？" target="_blank">Golang越来越火了 您还不赶紧开始看看？</a></div></li><li><div>·<a href="thread-4168005-1-1.html" title="【大话IT】微信忍不住了：从前端走向幕后" target="_blank">【大话IT】微信忍不住了：从前端走向幕后</a></div></li><li><div>·<a href="thread-4167488-1-1.html" title="【有奖讨论】Oracle 12c新特性功能体验交流" target="_blank">【有奖讨论】Oracle 12c新特性功能体验交流</a></div></li><li><div>·<a href="thread-4167388-1-1.html" title="IT运维技术讨论之三：大话日志分析与管理" target="_blank">IT运维技术讨论之三：大话日志分析与管理</a></div></li><li><div>·<a href="thread-4167294-1-1.html" title="【大话IT】微软弃Win 7 赌Win 10：能否自我救赎？" target="_blank">【大话IT】微软弃Win 7 赌Win 10：能否自我救赎？</a></div></li></ul></td><td valign="top"><ul><li><div>·<a href="thread-4169460-1-1.html" title="Linux之父炮轰C++：糟糕程序员的垃圾语言" target="_blank">Linux之父炮轰C++：糟糕程序员的垃圾语言</a></div></li><li><div>·<a href="thread-4169605-1-1.html" title="服务器与客户端之间的通信，一般是不是都有2个链接？" target="_blank">服务器与客户端之间的通信，一般是不是都有2个链接？</a></div></li><li><div>·<a href="thread-4169554-1-1.html" title="如果要做频繁的I/O操作，调用C函数库是不是比read/write效率更高?" target="_blank">如果要做频繁的I/O操作，调用C函数库是不是比read/write效率更高?</a></div></li><li><div>·<a href="thread-4169323-1-1.html" title="发布一个开源的C函数接口的网络爬虫引擎" target="_blank">发布一个开源的C函数接口的网络爬虫引擎</a></div></li><li><div>·<a href="thread-4169050-1-1.html" title="我感觉用缓存无法确保 事务的ACID特性，故障没法恢复" target="_blank">我感觉用缓存无法确保 事务的ACID特性，故障没法恢复</a></div></li><li><div>·<a href="thread-4168554-1-1.html" title="关闭stdout然后再次打开，发现不能工作了" target="_blank">关闭stdout然后再次打开，发现不能工作了</a></div></li><li><div>·<a href="thread-4168718-1-1.html" title="请问Linux下有什么比较好的文件加密程序/方法？" target="_blank">请问Linux下有什么比较好的文件加密程序/方法？</a></div></li><li><div>·<a href="thread-4168521-1-1.html" title="提供几本c++比较好的书籍资源和交流群" target="_blank">提供几本c++比较好的书籍资源和交流群</a></div></li><li><div>·<a href="thread-4168391-1-1.html" title="关于select函数的问题" target="_blank">关于select函数的问题</a></div></li></ul></td><td valign="top"><ul><li><div>·<a href="thread-1170202-1-1.html" title="[原创]贡献一个unix的贪吃蛇小游戏" target="_blank">[原创]贡献一个unix的贪吃蛇小游戏</a></div></li><li><div>·<a href="thread-855126-1-1.html" title="华为面试题(8分钟写出代码)" target="_blank">华为面试题(8分钟写出代码)</a></div></li><li><div>·<a href="thread-885044-1-1.html" title="delete一个对象数组的问题，请大侠帮忙看看" target="_blank">delete一个对象数组的问题，请大侠帮忙看看</a></div></li><li><div>·<a href="thread-408225-1-1.html" title="跟我一起写 Makefile" target="_blank">跟我一起写 Makefile</a></div></li><li><div>·<a href="thread-546293-1-1.html" title="有关 Emacs 使用技巧的内容请在这个帖子讨论。" target="_blank">有关 Emacs 使用技巧的内容请在这个帖子讨论。</a></div></li><li><div>·<a href="thread-1740087-1-1.html" title="已知一个函数f可以得到1-5间的随机数，问怎么得到1-7的随机数" target="_blank">已知一个函数f可以得到1-5间的随机数，问怎么得到1-7的随机数</a></div></li><li><div>·<a href="thread-1440200-1-1.html" title="【实时更新】2009.07.31传说中最好的linux c入门教材---Linux C编程一站式学习.pdf" target="_blank">【实时更新】2009.07.31传说中最好的linux c入门教材---Linux C编程一站式学习.pdf</a></div></li><li><div>·<a href="thread-67020-1-1.html" title="请谁介绍下/proc，如何编程应用？" target="_blank">请谁介绍下/proc，如何编程应用？</a></div></li><li><div>·<a href="thread-957813-1-1.html" title="SPServer： 一个基于线程池（包括HAHS和LF）的开源服务器框架" target="_blank">SPServer： 一个基于线程池（包括HAHS和LF）的开源服务器框架</a></div></li></ul></td><td valign="top"><ul><li><div>·<a href="http://ask.chinaunix.net/question/785702" title="谁能够帮我解决LINUX  2.6  10版本驱动" target="_blank">谁能够帮我解决LINUX  2.6  10版本驱动</a></div></li><li><div>·<a href="http://ask.chinaunix.net/question/785701" title="现在的博客积分不会更新了吗？" target="_blank">现在的博客积分不会更新了吗？</a></div></li><li><div>·<a href="http://ask.chinaunix.net/question/785686" title="shell怎么读取网页内容" target="_blank">shell怎么读取网页内容</a></div></li><li><div>·<a href="http://ask.chinaunix.net/question/785684" title="ssh等待连接的超时问题" target="_blank">ssh等待连接的超时问题</a></div></li><li><div>·<a href="http://ask.chinaunix.net/question/785661" title="curl: (56) Recv failure: Connection reset by peer" target="_blank">curl: (56) Recv failure: Connection reset by peer</a></div></li><li><div>·<a href="http://ask.chinaunix.net/question/785656" title="CACTI 不能安装WINE，怎么办？" target="_blank">CACTI 不能安装WINE，怎么办？</a></div></li><li><div>·<a href="http://ask.chinaunix.net/question/785650" title="shell怎么读取网页内容" target="_blank">shell怎么读取网页内容</a></div></li><li><div>·<a href="http://ask.chinaunix.net/question/785633" title="kernel 报错l701.exel[16922]: segfault at 30 ip 000000000115fa5b" target="_blank">kernel 报错l701.exel[16922]: segfault at 30 ip 000000000115fa5b</a></div></li><li><div>·<a href="http://ask.chinaunix.net/question/785630" title="C语言 如何在一个整型左边补0" target="_blank">C语言 如何在一个整型左边补0</a></div></li></ul></td><td valign="top"><ul><li><div>·<a href="http://blog.chinaunix.net/uid-13328506-id-4822901.html" title="从别人的角度理解这个世界——Leo鉴书80" target="_blank">从别人的角度理解这个世界——Leo鉴书80</a></div></li><li><div>·<a href="http://blog.chinaunix.net/uid-26470037-id-4822673.html" title="打造高质效的技术团队 —— 混乱篇" target="_blank">打造高质效的技术团队 —— 混乱篇</a></div></li><li><div>·<a href="http://blog.chinaunix.net/uid-20726500-id-4820580.html" title="PostgreSQL的全文检索插件zhparser的中文分词效果" target="_blank">PostgreSQL的全文检索插件zhparser的中文分词效果</a></div></li><li><div>·<a href="http://blog.chinaunix.net/uid-26772321-id-4820340.html" title="关于linux系统如何实现fork的研究(二)" target="_blank">关于linux系统如何实现fork的研究(二)</a></div></li><li><div>·<a href="http://blog.chinaunix.net/uid-27194309-id-4819468.html" title="常用的第三方库的说明集锦, 方便快速查找, 自用" target="_blank">常用的第三方库的说明集锦, 方便快速查找, 自用</a></div></li><li><div>·<a href="http://blog.chinaunix.net/uid-11795239-id-4819444.html" title="Docker 大规模应用部署管理方案" target="_blank">Docker 大规模应用部署管理方案</a></div></li><li><div>·<a href="http://blog.chinaunix.net/uid-7270462-id-4815638.html" title="RHEL4 glibc幽灵漏洞检测及修复方案 " target="_blank">RHEL4 glibc幽灵漏洞检测及修复方案 </a></div></li><li><div>·<a href="http://blog.chinaunix.net/uid-7374279-id-4813735.html" title="openstack研究:neutron网络见解" target="_blank">openstack研究:neutron网络见解</a></div></li><li><div>·<a href="http://blog.chinaunix.net/uid-20788636-id-4813701.html" title="Linux内核关闭IPv6协议的方式" target="_blank">Linux内核关闭IPv6协议的方式</a></div></li></ul></td></tr></table>
			<style>
			.tab30{width:100%;background:#000000;font-size:12px;border-collapse:separate;}
			.tab30 th{background:#9898ba;color:#fff;font-weight:bold;text-align:center;height:20px;}
			.tab30 th a{color:#FFFF00;}
			.tab30 td{padding:4px;background:#ffffff;}
			.tab30 td li{line-height:18px; width : 180;}
			.tab30 td li div{height:18px;overflow:Hidden; width : 180px;}
			.tab30 td li div a{color:#000;text-decoration:none;}
			.tab30 td li div a:hover{color:#f00;}
			p,div,form,ul,ol,li,dl,dt,dd {margin:0; padding:0; }
			ul,ol,li{list-style:none; }

			</style></div>
<!--广告位置移动这,去掉自带的 换为广告系统标签 -->
<table width="960px" height="20" cellspacing="0" cellpadding="0" border="0">
<tbody>
<tr>
<td align="center"><div id="ADV_17278"><script>LG('ADV_17278')</script></div></td>
<td align="center"><div id="ADV_18502"><script>LG('ADV_18502')</script></div></td>
<td align="center"><div id="ADV_18503"><script>LG('ADV_18503')</script></div></td>
<td align="center"><div id="ADV_18504"><script>LG('ADV_18504')</script></div></td>
</tr>
</tbody>
</table>
<!--2011.11.30增加样式style-->
<div id="pt" class="bm cl" style="margin:0;line-height:24px; height:24px">
<div class="z">
<a href="http://www.chinaunix.net" class="nvhm" title="首页">ChinaUnix.net</a> <em>&rsaquo;</em> <a href="forum.php">论坛</a> <em>&rsaquo;</em> <a href="forum.php?gid=60">程序设计</a><em>&rsaquo;</em> <a href="forum-23-1.html">C/C++</a></div>
</div>
<div class="wp" style="clear: both;">
<!--[diy=diy1]--><div id="diy1" class="area"></div><!--[/diy]-->
</div>
<div class="boardnav">
<div id="ct" class="wp cl">
<div class="mn">
<!--2011.11.30去除bm样式 -->
<div class="bml pbn">
<!--<div class="bm bml pbn"> -->
<!--2011.11.30加style-->
<div class="bm_h cl" style="padding-top:0">
<span class="o"><img id="forum_rules_23_img" src="http://cu.img168.net/static/image/common//collapsed_no.gif" title="收起/展开" alt="收起/展开" onclick="toggle_collapse('forum_rules_23')" /></span><span class="y">
<a href="home.php?mod=spacecp&amp;ac=favorite&amp;type=forum&amp;id=23&amp;handlekey=favoriteforum" id="a_favorite" class="fa_fav" onclick="showWindow(this.id, this.href, 'get', 0);">收藏本版</a>
<span class="pipe">|</span><a href="expand/rss/23.xml" class="fa_rss" target="_blank" title="RSS">订阅</a>
</span>
<h1 class="xs2">
<a href="forum-23-1.html">C/C++</a>
<span class="xs1 xw0 i">今日: <strong class="xi1">16</strong><span class="pipe">|</span>主题: <strong class="xi1">74438</strong></span>&nbsp;&nbsp;
<a href="expand/rankuser/day/23_201502.html" style=" font-weight:normal; color:#F00; font-size:12px" target=_blank>本版发帖排行榜</a>

</h1>
</div>
<div class="bm_c cl pbn">

<!--追加样式为蓝色粗体20111027-->
<div>版主: <span class="xi2 blue1"><a href="space-username-JohnBull.html" class="notabs" c="1">JohnBull</a>, <a href="space-username-langue.html" class="notabs" c="1">langue</a>, <a href="space-username-cugb_cat.html" class="notabs" c="1">cugb_cat</a>, <a href="space-username-net_robber.html" class="notabs" c="1">net_robber</a>, <a href="space-username-lenky0401.html" class="notabs" c="1">lenky0401</a>, <a href="space-username-myworkstation.html" class="notabs" c="1">myworkstation</a>, <a href="space-username-MMMIX.html" class="notabs" c="1">MMMIX</a></span></div><div id="forum_rules_23" style=";">
<div class="ptn xg2">本版主要交流Linux/Unix平台下的C/C++开发，同时提供最全面的C语言及C++编程培训及相关的信息、技术以及相关资料的下载。</div>
</div>
</div>
</div>


<div class="bm bmw fl" style="border:0">
<!--子板块显示取消-->
<!--<div class="bm_h cl"  style="background-color:#9898BA">
<span class="o"><img id="subforum_23_img" src="http://cu.img168.net/static/image/common//collapsed_no.gif" title="收起/展开" alt="收起/展开" onclick="toggle_collapse('subforum_23');" /></span>
<h2>子版块</h2>
</div>
 -->

<div id="subforum_23" style="">
<table class="fl_tb" border='1' cellspacing='1' cellpadding='0' bordercolor='#000'>
<tr align="center" class="header">
<td style="color:#fff; font-weight:bold" width="5%">&nbsp;</td>
<td style="color:#fff; font-weight:bold" width="54%">论坛</td>
<td style="color:#fff; font-weight:bold" width="6%">主题</td>
<td style="color:#fff; font-weight:bold" width="6%">帖数</td>
<td style="color:#fff; font-weight:bold" width="13%">最后发表</td>
</tr>
<tr><td class="fl_icn" align="center"  style="width: 36px;">
<a href="forum-84-1.html"><img src="data/attachment/common/icon/gui.gif" align="left" alt="" /></a></td>
<td style="padding-left:5px">
<h2><a href="forum-84-1.html"  style="">GUI编程</a></h2>
<p class="xg2">这里讨论GUI编程，包括GTK+ 、wxWidgets、Qt 等等图形界面开发工具</p></td>
<!--新增一列 -->
<td align="center">
<span class="xg1">2337</span></td>
<td align="center">
<span class="xi2">7723</span></td>
<td class="fl_by">
<div>
<a href="forum.php?mod=redirect&amp;tid=4167475&amp;goto=lastpost#lastpost" class="xi2">QT从32位系统到64位系统 ，代码需 ...</a> <cite>2015-01-30 16:51 <a href="space-username-xuanwoxingxi.html">xuanwoxingxi</a></cite>
</div>
</td>
</tr>
<tr class="fl_row">
<td class="fl_icn" align="center"  style="width: 36px;">
<a href="forum-142-1.html"><img src="data/attachment/common/icon/fp.gif" align="left" alt="" /></a></td>
<td style="padding-left:5px">
<h2><a href="forum-142-1.html"  style="">Functional编程</a></h2>
<p class="xg2">本版主要讨论FP（Functional编程）的相关技术，欢迎大家前来交流！</p><p>版主: <a href="space-username-MMMIX.html" class="notabs" c="1">MMMIX</a>, <a href="space-username-OwnWaterloo.html" class="notabs" c="1">OwnWaterloo</a>, <a href="space-username-flw.html" class="notabs" c="1">flw</a></p></td>
<!--新增一列 -->
<td align="center">
<span class="xg1">506</span></td>
<td align="center">
<span class="xi2">3278</span></td>
<td class="fl_by">
<div>
<a href="forum.php?mod=redirect&amp;tid=3677384&amp;goto=lastpost#lastpost" class="xi2">请高手对比一下: 我觉得lisp比pr ...</a> <cite>2014-12-28 13:11 <a href="space-username-chch1970.html">chch1970</a></cite>
</div>
</td>
</tr>
<tr class="fl_row">
</tr>
</table>
</div>
</div>
<div class="drag">
<!--[diy=diy4]--><div id="diy4" class="area"></div><!--[/diy]-->
</div>


<div id="pgt" class="bm bw0 pgs cl">
<div class="pg"><strong>1</strong><a href="forum-23-2.html">2</a><a href="forum-23-3.html">3</a><a href="forum-23-4.html">4</a><a href="forum-23-5.html">5</a><a href="forum-23-6.html">6</a><a href="forum-23-7.html">7</a><a href="forum-23-8.html">8</a><a href="forum-23-9.html">9</a><a href="forum-23-10.html">10</a><a href="forum-23-1000.html" class="last">... 2127</a><a href="forum-23-2.html" class="nxt">下一页</a><kbd><input type="text" name="custompage" size="5" style="height:22px" onkeydown="if(event.keyCode==13) {window.location='forum.php?mod=forumdisplay&fid=23&amp;page='+this.value; doane(event);}" /></kbd></div><span class="pgb y"  ><a href="forum.php">最近访问版块</a></span>
<!--增加版块跳转  -->
<span style="float:right; padding:0px 0 4px 0; margin-top:5px">
<select  style=" padding:5px 0 4px 0" onchange="if(this.options[this.selectedIndex].value != '') {
window.location=('forum-' + this.options[this.selectedIndex].value + '-1.html') }">
<option value="">版块跳转</option>
<optgroup label="--Linux操作系统">
<option value="216">新手园地</option>
<option value="269">&nbsp;&nbsp;&nbsp;硬件问题</option>
<option value="217">Linux系统管理</option>
<option value="218">Linux网络问题</option>
<option value="223">Linux环境编程</option>
<option value="271">Linux桌面系统</option>
<option value="221">国产Linux</option>
</optgroup>
<optgroup label="--Unix操作系统">
<option value="5">BSD</option>
<option value="127">&nbsp; &nbsp; &nbsp; BSD文档中心</option>
<option value="9">AIX</option>
<option value="193">&nbsp; &nbsp; &nbsp; 新手入门</option>
<option value="124">&nbsp; &nbsp; &nbsp; AIX文档中心</option>
<option value="189">&nbsp; &nbsp; &nbsp; 资源下载</option>
<option value="188">&nbsp; &nbsp; &nbsp; Power高级应用</option>
<option value="187">&nbsp; &nbsp; &nbsp; IBM存储</option>
<option value="10">AS400</option>
<option value="6">Solaris</option>
<option value="128">&nbsp; &nbsp; &nbsp; Solaris文档中心</option>
<option value="8">HP-UX</option>
<option value="129">HP文档中心</option>
<option value="7">SCO UNIX</option>
<option value="130">&nbsp; &nbsp; &nbsp; SCO文档中心</option>
<option value="118">互操作专区</option>
<option value="12">IRIX</option>
<option value="11">Tru64 UNIX</option>
<option value="41">Mac OS X</option>
</optgroup>
<optgroup label="--IT运维架构">
<option value="141">门户网站运维</option>
<option value="233">集群和高可用</option>
<option value="232">服务器应用</option>
<option value="235">监控和防护</option>
<option value="283">虚拟化技术</option>
<option value="185">架构设计</option>
<option value="285">行业应用和管理</option>
</optgroup>
<optgroup label="--IT基础设施">
<option value="45">服务器及硬件技术</option>
<option value="184">&nbsp; &nbsp; &nbsp; 服务器资源下载</option>
<option value="180">云计算</option>
<option value="181">&nbsp; &nbsp; &nbsp; 云计算文档中心</option>
<option value="182">&nbsp; &nbsp; &nbsp; 云计算业界</option>
<option value="183">&nbsp; &nbsp; &nbsp; 云计算资源下载</option>
<option value="34">存储备份</option>
<option value="125">&nbsp; &nbsp; &nbsp; 存储文档中心</option>
<option value="126">&nbsp; &nbsp; &nbsp; 存储业界</option>
<option value="145">&nbsp; &nbsp; &nbsp; 存储资源下载</option>
<option value="194">&nbsp; &nbsp; &nbsp; Symantec技术交流区</option>
<option value="29">安全技术</option>
<option value="30">网络技术</option>
<option value="131">&nbsp; &nbsp; &nbsp; 网络技术文档中心</option>
</optgroup>
<optgroup label="--程序设计">
<option value="23">C/C++</option>
<option value="84">&nbsp; &nbsp; &nbsp; GUI编程</option>
<option value="142">&nbsp; &nbsp; &nbsp; Functional编程</option>
<option value="224">内核源码</option>
<option value="220">&nbsp; &nbsp; &nbsp; 内核问题</option>
<option value="222">移动开发</option>
<option value="265">&nbsp; &nbsp; &nbsp; 移动开发技术资料</option>
<option value="24">Shell</option>
<option value="25">Perl</option>
<option value="26">Java</option>
<option value="133">&nbsp; &nbsp; &nbsp; Java文档中心</option>
<option value="27">PHP</option>
<option value="135">&nbsp; &nbsp; &nbsp; php文档中心</option>
<option value="55">Python</option>
<option value="132">&nbsp; &nbsp; &nbsp; Python文档中心</option>
<option value="116">Ruby</option>
<option value="226">CPU与编译器</option>
<option value="225">嵌入式开发</option>
<option value="227">驱动开发</option>
<option value="80">Web开发</option>
<option value="100">VoIP开发技术</option>
</optgroup>
<optgroup label="--数据库技术">
<option value="17">MySQL</option>
<option value="136">&nbsp; &nbsp; &nbsp; MySQL文档中心</option>
<option value="21">Sybase</option><option value="19">Oracle</option>
<option value="18">PostgreSQL</option><option value="22">DB2</option>
<option value="20">Informix</option><option value="140">数据仓库与数据挖掘</option>
<option value="292">NoSQL技术</option></optgroup><optgroup label="--综合交流区">
<option value="46">IT业界新闻与评论</option><option value="32">IT职业生涯</option>
<option value="293">&nbsp; &nbsp; &nbsp; 猎头招聘</option>
<option value="82">IT图书与评论</option>
<option value="156">&nbsp; &nbsp; &nbsp; CU技术图书大系</option>
<option value="247">&nbsp; &nbsp; &nbsp; Linux书友会</option>
<option value="54">二手交易</option><option value="249">下载共享</option>
<option value="250">Linux文档专区</option><option value="53">IT培训与认证</option>
<option value="295">&nbsp; &nbsp; &nbsp; 培训交流</option>
<option value="191">&nbsp; &nbsp; &nbsp; 认证培训</option>
</optgroup>
<optgroup label="--休闲生活">
<option value="31">清茶斋</option><option value="115">投资理财</option>
<option value="39">运动地带</option><option value="40">快乐数码摄影</option>
<option value="168">&nbsp; &nbsp; &nbsp; 摄影器材</option>
<option value="134">&nbsp; &nbsp; &nbsp; 摄影比赛专区</option><option value="121">IT爱车族</option>
<option value="96">旅游天下</option>
</optgroup>
<optgroup label="--站务及频道">
<option value="2">站务交流</option><option value="3">版主会议室</option>
<option value="51">博客SNS站务交流区</option><option value="123">CU活动专区</option>
<option value="207">&nbsp; &nbsp; &nbsp; Power活动专区</option>
<option value="169">&nbsp; &nbsp; &nbsp; 拍卖交流区</option>
<option value="97">频道交流区</option>
</optgroup>
</select>
</span>
<a href="javascript:;" style="margin-top:8px" id="newspecial" onmouseover="$('newspecial').id = 'newspecialtmp';this.id = 'newspecial';showMenu({'ctrlid':this.id})" onclick="showWindow('newthread', 'forum.php?mod=post&action=newthread&fid=23')" title="发新帖"><img src="http://cu.img168.net/static/image/common//pn_post.png" alt="发新帖" /></a></div><div class="threadtype">
<p>
<strong>全部</strong>
<a href="forum.php?mod=forumdisplay&amp;fid=23&amp;filter=typeid&amp;typeid=22">C++</a>
<a href="forum.php?mod=forumdisplay&amp;fid=23&amp;filter=typeid&amp;typeid=23">C</a>
<a href="forum.php?mod=forumdisplay&amp;fid=23&amp;filter=typeid&amp;typeid=24">算法</a>
<a href="forum.php?mod=forumdisplay&amp;fid=23&amp;filter=typeid&amp;typeid=25">函数</a>
<a href="forum.php?mod=forumdisplay&amp;fid=23&amp;filter=typeid&amp;typeid=460">技术动态</a>
<a href="forum.php?mod=forumdisplay&amp;fid=23&amp;filter=typeid&amp;typeid=461">其他</a>
<a href="forum.php?mod=forumdisplay&amp;fid=23&amp;filter=typeid&amp;typeid=539">书评</a>
</p>
</div>

<script type="text/javascript">showTypes('thread_types');</script>

<div id="threadlist" class="tl bm bmw">

<div class="th" style="background-color:#9898BA;padding:0;border:0;margin-bottom:-1px">
<table style="border-collapse:collapse;" cellspacing="0" cellpadding="0">
<tbody>
<tr class="header">
<td class="icn" style="border:1px solid #000;width:50px;line-height:24px;color:#fff;font-weight:bold;">
<a id="filter_special" href="javascript:;" class="showmenu xi2" onclick="showMenu(this.id)">
类型
</a>
</td>
<td colspan="2" style="border:1px solid #000;padding-left:5px;line-height:24px;" class="common">
主题:
<a href="forum-23-1.html" style="font-weight:bold">全部</a>
<a href="forum.php?mod=forumdisplay&amp;fid=23&amp;filter=digest&amp;digest=1" style="font-weight:bold">精华</a>
<a href="forum.php?mod=forumdisplay&amp;fid=23&amp;filter=specialtype&amp;specialtype=poll" style="font-weight:bold">投票</a>
<a href="forum.php?mod=forumdisplay&amp;fid=23&amp;filter=specialtype&amp;specialtype=reward" style="font-weight:bold">悬赏</a>
<a href="forum.php?mod=forumdisplay&amp;fid=23&amp;filter=specialtype&amp;specialtype=activity" style="font-weight:bold">活动</a>
  |
时间:
<a href="forum.php?mod=forumdisplay&amp;fid=23&amp;orderby=lastpost&amp;filter=dateline&amp;dateline=86400" style="font-weight:bold">一天</a>
<a href="forum.php?mod=forumdisplay&amp;fid=23&amp;orderby=lastpost&amp;filter=dateline&amp;dateline=172800" style="font-weight:bold">两天</a>
 	<a href="forum.php?mod=forumdisplay&amp;fid=23&amp;orderby=lastpost&amp;filter=dateline&amp;dateline=604800" style="font-weight:bold">周</a>
 	<a href="forum.php?mod=forumdisplay&amp;fid=23&amp;orderby=lastpost&amp;filter=dateline&amp;dateline=2592000" style="font-weight:bold">月</a>
 	<a href="forum.php?mod=forumdisplay&amp;fid=23&amp;orderby=lastpost&amp;filter=dateline&amp;dateline=7948800" style="font-weight:bold">季</a>
 |
<a href="forum.php?mod=forumdisplay&amp;fid=23&amp;filter=heat&amp;orderby=heats" style="font-weight:bold">热门</a>

 | <a href="javascript:;" onclick="checkForumnew_btn('23')" title="查看更新" class="forumrefresh" style="font-weight:bold">版块更新</a>

</td>
<td style="border:1px solid #000;text-align:center;color:#fff;font-weight:bold;width:114px" class="by"><a href="forum.php?mod=forumdisplay&amp;fid=23&amp;filter=author&amp;orderby=dateline">作者/时间</a></td>
<td style="border:1px solid #000;text-align:center;color:#fff;font-weight:bold" class="num"><a href="forum.php?mod=forumdisplay&amp;fid=23&amp;filter=reply&amp;orderby=replies">回复</a></td>
<td style="border:1px solid #000;text-align:center;color:#fff;font-weight:bold" class="num"><a href="forum.php?mod=forumdisplay&amp;fid=23&amp;filter=reply&amp;orderby=views">查看</a></td>
<td style="border:1px solid #000;text-align:center;color:#fff;font-weight:bold;width:115px;" class="by"><a href="forum.php?mod=forumdisplay&amp;fid=23&amp;filter=lastpost&amp;orderby=lastpost">最后发表</a></td>
</tr>
</tbody>
</table>
</div>





<div class="bm_c" style="padding:0">

<script type="text/javascript">var lasttime = 1423633937;</script>
<div id="forumnew" style="display:none"></div>

<form method="post" autocomplete="off" name="moderate" id="moderate" action="forum.php?mod=topicadmin&amp;action=moderate&amp;fid=23&amp;infloat=yes&amp;nopost=yes">
<input type="hidden" name="formhash" value="26eba110" />
<input type="hidden" name="listextra" value="page%3D1" />
<table summary="forum_23"  cellspacing="0" cellpadding="0" style="border-collapse:collapse">
<tbody id="stickthread_4169617">
<tr>
<!--2011.11.30增加style-->
<td class="icn" style="border:1px solid #000;width:50px;text-align:center" bgcolor="#F0F3FA">
<!-- 这里删除一堆的东西将原文件copy这 -->
<center>
<a href="thread-4169617-1-1.html" title="新窗口打开" target="_blank">
<img src="http://cu.img168.net/static/image/common//folder_common.gif" style="margin-left:-5px"/></a>
</center>
</td>
<th class="common" style="border:1px solid #000" colspan="2" bgcolor="#fafbfc">
&nbsp;&nbsp;
<!--将管理选项置顶图标移到标题td中 -->

<b>[通告]</b>：

<!--2011.11.30特殊主题图标 -->

<!--2011.12.01精华图标 -->


 <a href="thread-4169617-1-1.html" style="font-weight: bold;color: #3C9D40" onclick="atarget(this)" class="xst" >【大话IT】国产操作系统与应用生态圈：鸡生蛋还是蛋生鸡？</a>
<span class="tps">&nbsp;...<a href="thread-4169617-2-1.html">2</a></span>
</th>
<td class="by" style="border:1px solid #000;width:114px;text-align:center" bgcolor="#F0F3FA">
<cite>
<a href="space-uid-26600021.html" c="1"><font color='#c80000'>pipihappy8888</font><em style='display: inline-block;width: 16px;height: 9px;background: url(source/plugin/auction/images/v.jpg) no-repeat;overflow: hidden;'></em></a></cite>
<em><span>2015-02-10</span></em>
</td>
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#fafbfc">
<a href="thread-4169617-1-1.html" class="xi2">12</a>
</td>
<!--加一列 -->
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#F0F3FA">
<em>1840</em>
</td>
<td class="by" style="border:1px solid #000;text-align:center;width:115px" bgcolor="#fafbfc">
<cite><a href="space-username-hellioncu.html" c="1"><font color='#f6c500'>hellioncu</font><em style='display: inline-block;width: 16px;height: 9px;background: url(source/plugin/auction/images/v.jpg) no-repeat;overflow: hidden;'></em></a></cite>
<em><a href="forum.php?mod=redirect&tid=4169617&goto=lastpost#lastpost">2015-02-11 13:44</a></em>
</td>
</tr>
</tbody>
<tbody id="stickthread_4168766">
<tr>
<!--2011.11.30增加style-->
<td class="icn" style="border:1px solid #000;width:50px;text-align:center" bgcolor="#F0F3FA">
<!-- 这里删除一堆的东西将原文件copy这 -->
<center>
<a href="thread-4168766-1-1.html" title="新窗口打开" target="_blank">
<img src="http://cu.img168.net/static/image/common//folder_common.gif" style="margin-left:-5px"/></a>
</center>
</td>
<th class="common" style="border:1px solid #000" colspan="2" bgcolor="#fafbfc">
&nbsp;&nbsp;
<!--将管理选项置顶图标移到标题td中 -->

<b>[通告]</b>：

<!--2011.11.30特殊主题图标 -->

<!--2011.12.01精华图标 -->


 <a href="thread-4168766-1-1.html" style="font-weight: bold;color: #EE1B2E" onclick="atarget(this)" class="xst" >高并发Oracle数据库系统的架构与设计经验谈，欢迎参与！</a>
<span class="tps">&nbsp;...<a href="thread-4168766-2-1.html">2</a><a href="thread-4168766-3-1.html">3</a><a href="thread-4168766-4-1.html">4</a><a href="thread-4168766-5-1.html">5</a></span>
</th>
<td class="by" style="border:1px solid #000;width:114px;text-align:center" bgcolor="#F0F3FA">
<cite>
<a href="space-uid-7944836.html" c="1"><font color='#c80000'>send_linux</font><em style='display: inline-block;width: 16px;height: 9px;background: url(source/plugin/auction/images/v.jpg) no-repeat;overflow: hidden;'></em></a></cite>
<em><span>2015-02-03</span></em>
</td>
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#fafbfc">
<a href="thread-4168766-1-1.html" class="xi2">45</a>
</td>
<!--加一列 -->
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#F0F3FA">
<em>7994</em>
</td>
<td class="by" style="border:1px solid #000;text-align:center;width:115px" bgcolor="#fafbfc">
<cite><a href="space-username-aluocp.html" c="1">aluocp</a></cite>
<em><a href="forum.php?mod=redirect&tid=4168766&goto=lastpost#lastpost">2015-02-11 11:36</a></em>
</td>
</tr>
</tbody>
<tbody id="stickthread_4157502">
<tr>
<!--2011.11.30增加style-->
<td class="icn" style="border:1px solid #000;width:50px;text-align:center" bgcolor="#F0F3FA">
<!-- 这里删除一堆的东西将原文件copy这 -->
<center>
<a href="thread-4157502-1-1.html" title="新窗口打开" target="_blank">
<img src="http://cu.img168.net/static/image/common//folder_common.gif" style="margin-left:-5px"/></a>
</center>
</td>
<th class="common" style="border:1px solid #000" colspan="2" bgcolor="#fafbfc">
&nbsp;&nbsp;
<!--将管理选项置顶图标移到标题td中 -->

<b>[通告]</b>：

<!--2011.11.30特殊主题图标 -->

<!--2011.12.01精华图标 -->


 <a href="thread-4157502-1-1.html" style="font-weight: bold;color: #2B65B7" onclick="atarget(this)" class="xst" >HP Helion在Openstack社区异军突起！能否复制IBM投资Linux的奇迹？</a>
<span class="tps">&nbsp;...<a href="thread-4157502-2-1.html">2</a><a href="thread-4157502-3-1.html">3</a><a href="thread-4157502-4-1.html">4</a></span>
</th>
<td class="by" style="border:1px solid #000;width:114px;text-align:center" bgcolor="#F0F3FA">
<cite>
<a href="space-uid-7944836.html" c="1"><font color='#c80000'>send_linux</font><em style='display: inline-block;width: 16px;height: 9px;background: url(source/plugin/auction/images/v.jpg) no-repeat;overflow: hidden;'></em></a></cite>
<em><span>2014-10-16</span></em>
</td>
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#fafbfc">
<a href="thread-4157502-1-1.html" class="xi2">33</a>
</td>
<!--加一列 -->
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#F0F3FA">
<em>11367</em>
</td>
<td class="by" style="border:1px solid #000;text-align:center;width:115px" bgcolor="#fafbfc">
<cite><a href="space-username-seesea2517.html" c="1"><font color='#f6c500'>seesea2517</font><em style='display: inline-block;width: 16px;height: 9px;background: url(source/plugin/auction/images/v.jpg) no-repeat;overflow: hidden;'></em></a></cite>
<em><a href="forum.php?mod=redirect&tid=4157502&goto=lastpost#lastpost">2015-02-11 09:50</a></em>
</td>
</tr>
</tbody>
<tbody id="stickthread_4167970">
<tr>
<!--2011.11.30增加style-->
<td class="icn" style="border:1px solid #000;width:50px;text-align:center" bgcolor="#F0F3FA">
<!-- 这里删除一堆的东西将原文件copy这 -->
<center>
<a href="thread-4167970-1-1.html" title="新窗口打开" target="_blank">
<img src="http://cu.img168.net/static/image/common//folder_common.gif" style="margin-left:-5px"/></a>
</center>
</td>
<th class="common" style="border:1px solid #000" colspan="2" bgcolor="#fafbfc">
&nbsp;&nbsp;
<!--将管理选项置顶图标移到标题td中 -->

<b>[通告]</b>：

<!--2011.11.30特殊主题图标 -->

<!--2011.12.01精华图标 -->


 <a href="thread-4167970-1-1.html" style="font-weight: bold;color: #8F2A90" onclick="atarget(this)" class="xst" >Golang越来越火了 您还不赶紧开始看看？</a>
<span class="tps">&nbsp;...<a href="thread-4167970-2-1.html">2</a><a href="thread-4167970-3-1.html">3</a><a href="thread-4167970-4-1.html">4</a></span>
</th>
<td class="by" style="border:1px solid #000;width:114px;text-align:center" bgcolor="#F0F3FA">
<cite>
<a href="space-uid-25203957.html" c="1">crazyhadoop<em style='display: inline-block;width: 16px;height: 9px;background: url(source/plugin/auction/images/v.jpg) no-repeat;overflow: hidden;'></em></a></cite>
<em><span>2015-01-27</span></em>
</td>
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#fafbfc">
<a href="thread-4167970-1-1.html" class="xi2">33</a>
</td>
<!--加一列 -->
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#F0F3FA">
<em>14032</em>
</td>
<td class="by" style="border:1px solid #000;text-align:center;width:115px" bgcolor="#fafbfc">
<cite><a href="space-username-SeAL80s.html" c="1">SeAL80s</a></cite>
<em><a href="forum.php?mod=redirect&tid=4167970&goto=lastpost#lastpost">2015-02-11 01:41</a></em>
</td>
</tr>
</tbody>
<tbody id="stickthread_4165926">
<tr>
<!--2011.11.30增加style-->
<td class="icn" style="border:1px solid #000;width:50px;text-align:center" bgcolor="#F0F3FA">
<!-- 这里删除一堆的东西将原文件copy这 -->
<center>
<a href="thread-4165926-1-1.html" title="新窗口打开" target="_blank">
<img src="http://cu.img168.net/static/image/common//folder_common.gif" style="margin-left:-5px"/></a>
</center>
</td>
<th class="common" style="border:1px solid #000" colspan="2" bgcolor="#fafbfc">
&nbsp;&nbsp;
<!--将管理选项置顶图标移到标题td中 -->

<b>[通告]</b>：

<!--2011.11.30特殊主题图标 -->

<!--2011.12.01精华图标 -->


 <a href="thread-4165926-1-1.html" style="font-weight: bold;color: #8F2A90" onclick="atarget(this)" class="xst" >中国数据库技术大会视频，尽在IT168技术讲堂！</a>
<span class="tps">&nbsp;...<a href="thread-4165926-2-1.html">2</a><a href="thread-4165926-3-1.html">3</a></span>
</th>
<td class="by" style="border:1px solid #000;width:114px;text-align:center" bgcolor="#F0F3FA">
<cite>
<a href="space-uid-7944836.html" c="1"><font color='#c80000'>send_linux</font><em style='display: inline-block;width: 16px;height: 9px;background: url(source/plugin/auction/images/v.jpg) no-repeat;overflow: hidden;'></em></a></cite>
<em><span>2015-01-09</span></em>
</td>
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#fafbfc">
<a href="thread-4165926-1-1.html" class="xi2">29</a>
</td>
<!--加一列 -->
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#F0F3FA">
<em>19648</em>
</td>
<td class="by" style="border:1px solid #000;text-align:center;width:115px" bgcolor="#fafbfc">
<cite><a href="space-username-zuochuang.html" c="1">zuochuang</a></cite>
<em><a href="forum.php?mod=redirect&tid=4165926&goto=lastpost#lastpost">2015-02-10 18:46</a></em>
</td>
</tr>
</tbody>
<tbody id="stickthread_4167388">
<tr>
<!--2011.11.30增加style-->
<td class="icn" style="border:1px solid #000;width:50px;text-align:center" bgcolor="#F0F3FA">
<!-- 这里删除一堆的东西将原文件copy这 -->
<center>
<a href="thread-4167388-1-1.html" title="新窗口打开" target="_blank">
<img src="http://cu.img168.net/static/image/common//folder_common.gif" style="margin-left:-5px"/></a>
</center>
</td>
<th class="common" style="border:1px solid #000" colspan="2" bgcolor="#fafbfc">
&nbsp;&nbsp;
<!--将管理选项置顶图标移到标题td中 -->

<b>[通告]</b>：

<!--2011.11.30特殊主题图标 -->

<!--2011.12.01精华图标 -->


 <a href="thread-4167388-1-1.html" style="font-weight: bold;color: #EE5023" onclick="atarget(this)" class="xst" >IT运维技术讨论之三：大话日志分析与管理</a>
<img src="static/image/filetype/image_s.gif" alt="attach_img" title="图片附件" align="absmiddle" />
<span class="tps">&nbsp;...<a href="thread-4167388-2-1.html">2</a><a href="thread-4167388-3-1.html">3</a><a href="thread-4167388-4-1.html">4</a><a href="thread-4167388-5-1.html">5</a><a href="thread-4167388-6-1.html">6</a></span>
</th>
<td class="by" style="border:1px solid #000;width:114px;text-align:center" bgcolor="#F0F3FA">
<cite>
<a href="space-uid-59434.html" c="1">cgweb</a></cite>
<em><span>2015-01-22</span></em>
</td>
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#fafbfc">
<a href="thread-4167388-1-1.html" class="xi2">54</a>
</td>
<!--加一列 -->
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#F0F3FA">
<em>19934</em>
</td>
<td class="by" style="border:1px solid #000;text-align:center;width:115px" bgcolor="#fafbfc">
<cite><a href="space-username-shark010.html" c="1">shark010</a></cite>
<em><a href="forum.php?mod=redirect&tid=4167388&goto=lastpost#lastpost">2015-02-10 06:33</a></em>
</td>
</tr>
</tbody>
<tbody id="stickthread_300616">
<tr>
<!--2011.11.30增加style-->
<td class="icn" style="border:1px solid #000;width:50px;text-align:center" bgcolor="#F0F3FA">
<!-- 这里删除一堆的东西将原文件copy这 -->
<center>
<a href="thread-300616-1-1.html" title="新窗口打开" target="_blank">
<img src="http://cu.img168.net/static/image/common//folder_common.gif" style="margin-left:-5px"/></a>
</center>
</td>
<th class="common" style="border:1px solid #000" colspan="2" bgcolor="#fafbfc">
&nbsp;&nbsp;
<!--将管理选项置顶图标移到标题td中 -->

<b>[置顶]</b>：

<!--2011.11.30特殊主题图标 -->

<!--2011.12.01精华图标 -->


 <a href="thread-300616-1-1.html" style="font-weight: bold;" onclick="atarget(this)" class="xst" >【入版必读】如何尽可能高效地使用论坛＋解决编程问题的五个方法</a>
<img src="static/image/filetype/common.gif" alt="attachment" title="附件" align="absmiddle" />
<span class="tps">&nbsp;...<a href="thread-300616-2-1.html">2</a><a href="thread-300616-3-1.html">3</a><a href="thread-300616-4-1.html">4</a><a href="thread-300616-5-1.html">5</a><a href="thread-300616-6-1.html">6</a>..<a href="thread-300616-13-1.html">13</a></span>
</th>
<td class="by" style="border:1px solid #000;width:114px;text-align:center" bgcolor="#F0F3FA">
<cite>
<a href="space-uid-45332.html" c="1">flw</a></cite>
<em><span>2004-04-10</span></em>
</td>
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#fafbfc">
<a href="thread-300616-1-1.html" class="xi2">129</a>
</td>
<!--加一列 -->
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#F0F3FA">
<em>142180</em>
</td>
<td class="by" style="border:1px solid #000;text-align:center;width:115px" bgcolor="#fafbfc">
<cite><a href="space-username-zhj1011.html" c="1"><font color='#c80000'>zhj1011</font><em style='display: inline-block;width: 16px;height: 9px;background: url(source/plugin/auction/images/v.jpg) no-repeat;overflow: hidden;'></em></a></cite>
<em><a href="forum.php?mod=redirect&tid=300616&goto=lastpost#lastpost">2014-08-07 14:48</a></em>
</td>
</tr>
</tbody>
<tbody id="normalthread_4169491">
<tr>
<!--2011.11.30增加style-->
<td class="icn" style="border:1px solid #000;width:50px;text-align:center" bgcolor="#F0F3FA">
<!-- 这里删除一堆的东西将原文件copy这 -->
<center>
<a href="thread-4169491-1-1.html" title="新窗口打开" target="_blank">
<img src="http://cu.img168.net/static/image/common//folder_new.gif" style="margin-left:-5px"/></a>
</center>
</td>
<th class="new" style="border:1px solid #000" colspan="2" bgcolor="#fafbfc">
&nbsp;&nbsp;
<!--将管理选项置顶图标移到标题td中 -->

<!--2011.11.30特殊主题图标 -->

<!--2011.12.01精华图标 -->


<em>[<a href="forum.php?mod=forumdisplay&fid=23&amp;filter=typeid&amp;typeid=25">函数</a>]</em> <a href="thread-4169491-1-1.html" onclick="atarget(this)" class="xst" >请教个socket编程的问题，谢谢</a>
<a href="forum.php?mod=redirect&amp;tid=4169491&amp;goto=lastpost#lastpost" class="xi1">New</a>
</th>
<td class="by" style="border:1px solid #000;width:114px;text-align:center" bgcolor="#F0F3FA">
<cite>
<a href="space-uid-28914296.html" c="1">fire_vr</a></cite>
<em><span>2015-02-09</span></em>
</td>
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#fafbfc">
<a href="thread-4169491-1-1.html" class="xi2">7</a>
</td>
<!--加一列 -->
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#F0F3FA">
<em>352</em>
</td>
<td class="by" style="border:1px solid #000;text-align:center;width:115px" bgcolor="#fafbfc">
<cite><a href="space-username-BetonArmEE.html" c="1">BetonArmEE</a></cite>
<em><a href="forum.php?mod=redirect&tid=4169491&goto=lastpost#lastpost">2015-02-11 13:50</a></em>
</td>
</tr>
</tbody>
<tbody id="normalthread_4169715">
<tr>
<!--2011.11.30增加style-->
<td class="icn" style="border:1px solid #000;width:50px;text-align:center" bgcolor="#F0F3FA">
<!-- 这里删除一堆的东西将原文件copy这 -->
<center>
<a href="thread-4169715-1-1.html" title="新窗口打开" target="_blank">
<img src="http://cu.img168.net/static/image/common//folder_new.gif" style="margin-left:-5px"/></a>
</center>
</td>
<th class="new" style="border:1px solid #000" colspan="2" bgcolor="#fafbfc">
&nbsp;&nbsp;
<!--将管理选项置顶图标移到标题td中 -->

<!--2011.11.30特殊主题图标 -->

<!--2011.12.01精华图标 -->


<em>[<a href="forum.php?mod=forumdisplay&fid=23&amp;filter=typeid&amp;typeid=461">其他</a>]</em> <a href="thread-4169715-1-1.html" onclick="atarget(this)" class="xst" >放弃Codelite吧，刚刚装了个7.0，发现竟然写着C/C++、PHP的IDE。。。</a>
<a href="forum.php?mod=redirect&amp;tid=4169715&amp;goto=lastpost#lastpost" class="xi1">New</a>
</th>
<td class="by" style="border:1px solid #000;width:114px;text-align:center" bgcolor="#F0F3FA">
<cite>
<a href="space-uid-20679983.html" c="1">fender0107401</a></cite>
<em><span class="xi1">2015-02-11</span></em>
</td>
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#fafbfc">
<a href="thread-4169715-1-1.html" class="xi2">0</a>
</td>
<!--加一列 -->
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#F0F3FA">
<em>17</em>
</td>
<td class="by" style="border:1px solid #000;text-align:center;width:115px" bgcolor="#fafbfc">
<cite><a href="space-username-fender0107401.html" c="1">fender0107401</a></cite>
<em><a href="forum.php?mod=redirect&tid=4169715&goto=lastpost#lastpost">2015-02-11 13:41</a></em>
</td>
</tr>
</tbody>
<tbody id="normalthread_4169460">
<tr>
<!--2011.11.30增加style-->
<td class="icn" style="border:1px solid #000;width:50px;text-align:center" bgcolor="#F0F3FA">
<!-- 这里删除一堆的东西将原文件copy这 -->
<center>
<a href="thread-4169460-1-1.html" title="新窗口打开" target="_blank">
<img src="http://cu.img168.net/static/image/common//folder_new.gif" style="margin-left:-5px"/></a>
</center>
</td>
<th class="new" style="border:1px solid #000" colspan="2" bgcolor="#fafbfc">
&nbsp;&nbsp;
<!--将管理选项置顶图标移到标题td中 -->

<!--2011.11.30特殊主题图标 -->

<!--2011.12.01精华图标 -->


<em>[<a href="forum.php?mod=forumdisplay&fid=23&amp;filter=typeid&amp;typeid=22">C++</a>]</em> <a href="thread-4169460-1-1.html" onclick="atarget(this)" class="xst" >Linux之父炮轰C++：糟糕程序员的垃圾语言</a>
<a href="forum.php?mod=redirect&amp;tid=4169460&amp;goto=lastpost#lastpost" class="xi1">New</a>
</th>
<td class="by" style="border:1px solid #000;width:114px;text-align:center" bgcolor="#F0F3FA">
<cite>
<a href="space-uid-29968779.html" c="1">kg假装无所谓</a></cite>
<em><span>2015-02-09</span></em>
</td>
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#fafbfc">
<a href="thread-4169460-1-1.html" class="xi2">6</a>
</td>
<!--加一列 -->
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#F0F3FA">
<em>529</em>
</td>
<td class="by" style="border:1px solid #000;text-align:center;width:115px" bgcolor="#fafbfc">
<cite><a href="space-username-fender0107401.html" c="1">fender0107401</a></cite>
<em><a href="forum.php?mod=redirect&tid=4169460&goto=lastpost#lastpost">2015-02-11 13:20</a></em>
</td>
</tr>
</tbody>
<tbody id="normalthread_4169605">
<tr>
<!--2011.11.30增加style-->
<td class="icn" style="border:1px solid #000;width:50px;text-align:center" bgcolor="#F0F3FA">
<!-- 这里删除一堆的东西将原文件copy这 -->
<center>
<a href="thread-4169605-1-1.html" title="新窗口打开" target="_blank">
<img src="http://cu.img168.net/static/image/common//folder_new.gif" style="margin-left:-5px"/></a>
</center>
</td>
<th class="new" style="border:1px solid #000" colspan="2" bgcolor="#fafbfc">
&nbsp;&nbsp;
<!--将管理选项置顶图标移到标题td中 -->

<!--2011.11.30特殊主题图标 -->

<!--2011.12.01精华图标 -->


<em>[<a href="forum.php?mod=forumdisplay&fid=23&amp;filter=typeid&amp;typeid=461">其他</a>]</em> <a href="thread-4169605-1-1.html" onclick="atarget(this)" class="xst" >服务器与客户端之间的通信，一般是不是都有2个链接？</a>
<span class="tps">&nbsp;...<a href="thread-4169605-2-1.html">2</a></span>
<a href="forum.php?mod=redirect&amp;tid=4169605&amp;goto=lastpost#lastpost" class="xi1">New</a>
</th>
<td class="by" style="border:1px solid #000;width:114px;text-align:center" bgcolor="#F0F3FA">
<cite>
<a href="space-uid-20679983.html" c="1">fender0107401</a></cite>
<em><span>2015-02-10</span></em>
</td>
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#fafbfc">
<a href="thread-4169605-1-1.html" class="xi2">13</a>
</td>
<!--加一列 -->
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#F0F3FA">
<em>499</em>
</td>
<td class="by" style="border:1px solid #000;text-align:center;width:115px" bgcolor="#fafbfc">
<cite><a href="space-username-fender0107401.html" c="1">fender0107401</a></cite>
<em><a href="forum.php?mod=redirect&tid=4169605&goto=lastpost#lastpost">2015-02-11 13:15</a></em>
</td>
</tr>
</tbody>
<tbody id="normalthread_4169492">
<tr>
<!--2011.11.30增加style-->
<td class="icn" style="border:1px solid #000;width:50px;text-align:center" bgcolor="#F0F3FA">
<!-- 这里删除一堆的东西将原文件copy这 -->
<center>
<a href="thread-4169492-1-1.html" title="新窗口打开" target="_blank">
<img src="http://cu.img168.net/static/image/common//folder_common.gif" style="margin-left:-5px"/></a>
</center>
</td>
<th class="common" style="border:1px solid #000" colspan="2" bgcolor="#fafbfc">
&nbsp;&nbsp;
<!--将管理选项置顶图标移到标题td中 -->

<!--2011.11.30特殊主题图标 -->

<!--2011.12.01精华图标 -->


<em>[<a href="forum.php?mod=forumdisplay&fid=23&amp;filter=typeid&amp;typeid=22">C++</a>]</em> <a href="thread-4169492-1-1.html" onclick="atarget(this)" class="xst" >请教一个shared_ptr的问题</a>
</th>
<td class="by" style="border:1px solid #000;width:114px;text-align:center" bgcolor="#F0F3FA">
<cite>
<a href="space-uid-21179297.html" c="1">VIP_fuck</a></cite>
<em><span>2015-02-09</span></em>
</td>
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#fafbfc">
<a href="thread-4169492-1-1.html" class="xi2">6</a>
</td>
<!--加一列 -->
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#F0F3FA">
<em>349</em>
</td>
<td class="by" style="border:1px solid #000;text-align:center;width:115px" bgcolor="#fafbfc">
<cite><a href="space-username-VIP_fuck.html" c="1">VIP_fuck</a></cite>
<em><a href="forum.php?mod=redirect&tid=4169492&goto=lastpost#lastpost">2015-02-11 11:39</a></em>
</td>
</tr>
</tbody>
<tbody id="normalthread_4169554">
<tr>
<!--2011.11.30增加style-->
<td class="icn" style="border:1px solid #000;width:50px;text-align:center" bgcolor="#F0F3FA">
<!-- 这里删除一堆的东西将原文件copy这 -->
<center>
<a href="thread-4169554-1-1.html" title="新窗口打开" target="_blank">
<img src="http://cu.img168.net/static/image/common//folder_common.gif" style="margin-left:-5px"/></a>
</center>
</td>
<th class="common" style="border:1px solid #000" colspan="2" bgcolor="#fafbfc">
&nbsp;&nbsp;
<!--将管理选项置顶图标移到标题td中 -->

<!--2011.11.30特殊主题图标 -->

<!--2011.12.01精华图标 -->


<em>[<a href="forum.php?mod=forumdisplay&fid=23&amp;filter=typeid&amp;typeid=23">C</a>]</em> <a href="thread-4169554-1-1.html" onclick="atarget(this)" class="xst" >如果要做频繁的I/O操作，调用C函数库是不是比read/write效率更高?</a>
<span class="tps">&nbsp;...<a href="thread-4169554-2-1.html">2</a></span>
</th>
<td class="by" style="border:1px solid #000;width:114px;text-align:center" bgcolor="#F0F3FA">
<cite>
<a href="space-uid-30093195.html" c="1">cdsfiui</a></cite>
<em><span>2015-02-10</span></em>
</td>
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#fafbfc">
<a href="thread-4169554-1-1.html" class="xi2">18</a>
</td>
<!--加一列 -->
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#F0F3FA">
<em>662</em>
</td>
<td class="by" style="border:1px solid #000;text-align:center;width:115px" bgcolor="#fafbfc">
<cite><a href="space-username-%C1%F7%C3%A5%CE%DE%B2%FA%D5%DF.html" c="1">流氓无产者</a></cite>
<em><a href="forum.php?mod=redirect&tid=4169554&goto=lastpost#lastpost">2015-02-11 09:41</a></em>
</td>
</tr>
</tbody>
<tbody id="normalthread_4169618">
<tr>
<!--2011.11.30增加style-->
<td class="icn" style="border:1px solid #000;width:50px;text-align:center" bgcolor="#F0F3FA">
<!-- 这里删除一堆的东西将原文件copy这 -->
<center>
<a href="thread-4169618-1-1.html" title="新窗口打开" target="_blank">
<img src="http://cu.img168.net/static/image/common//folder_common.gif" style="margin-left:-5px"/></a>
</center>
</td>
<th class="common" style="border:1px solid #000" colspan="2" bgcolor="#fafbfc">
&nbsp;&nbsp;
<!--将管理选项置顶图标移到标题td中 -->

<!--2011.11.30特殊主题图标 -->

<!--2011.12.01精华图标 -->


<em>[<a href="forum.php?mod=forumdisplay&fid=23&amp;filter=typeid&amp;typeid=23">C</a>]</em> <a href="thread-4169618-1-1.html" onclick="atarget(this)" class="xst" >好奇各公司代码注释都要求写到什么程度</a>
</th>
<td class="by" style="border:1px solid #000;width:114px;text-align:center" bgcolor="#F0F3FA">
<cite>
<a href="space-uid-14825809.html" c="1">wsysx<em style='display: inline-block;width: 16px;height: 9px;background: url(source/plugin/auction/images/v.jpg) no-repeat;overflow: hidden;'></em></a></cite>
<em><span>2015-02-10</span></em>
</td>
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#fafbfc">
<a href="thread-4169618-1-1.html" class="xi2">8</a>
</td>
<!--加一列 -->
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#F0F3FA">
<em>332</em>
</td>
<td class="by" style="border:1px solid #000;text-align:center;width:115px" bgcolor="#fafbfc">
<cite><a href="space-username-ilex.html" c="1">ilex</a></cite>
<em><a href="forum.php?mod=redirect&tid=4169618&goto=lastpost#lastpost">2015-02-11 09:40</a></em>
</td>
</tr>
</tbody>
<tbody id="normalthread_286646">
<tr>
<!--2011.11.30增加style-->
<td class="icn" style="border:1px solid #000;width:50px;text-align:center" bgcolor="#F0F3FA">
<!-- 这里删除一堆的东西将原文件copy这 -->
<center>
<a href="thread-286646-1-1.html" title="新窗口打开" target="_blank">
<img src="http://cu.img168.net/static/image/common//folder_common.gif" style="margin-left:-5px"/></a>
</center>
</td>
<th class="common" style="border:1px solid #000" colspan="2" bgcolor="#fafbfc">
&nbsp;&nbsp;
<!--将管理选项置顶图标移到标题td中 -->

<!--2011.11.30特殊主题图标 -->

<!--2011.12.01精华图标 -->


 <a href="thread-286646-1-1.html" onclick="atarget(this)" class="xst" >【资源集合】c/c++ 书籍、网页、文档、资料（不断增加中……）</a>
<img src="static/image/filetype/image_s.gif" alt="attach_img" title="图片附件" align="absmiddle" />
<span class="tps">&nbsp;...<a href="thread-286646-2-1.html">2</a><a href="thread-286646-3-1.html">3</a><a href="thread-286646-4-1.html">4</a><a href="thread-286646-5-1.html">5</a><a href="thread-286646-6-1.html">6</a>..<a href="thread-286646-23-1.html">23</a></span>
</th>
<td class="by" style="border:1px solid #000;width:114px;text-align:center" bgcolor="#F0F3FA">
<cite>
<a href="space-uid-44767.html" c="1">lenovo</a></cite>
<em><span>2004-03-22</span></em>
</td>
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#fafbfc">
<a href="thread-286646-1-1.html" class="xi2">227</a>
</td>
<!--加一列 -->
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#F0F3FA">
<em>498496</em>
</td>
<td class="by" style="border:1px solid #000;text-align:center;width:115px" bgcolor="#fafbfc">
<cite><a href="space-username-oopos.html" c="1">oopos</a></cite>
<em><a href="forum.php?mod=redirect&tid=286646&goto=lastpost#lastpost">2015-02-11 06:38</a></em>
</td>
</tr>
</tbody>
<tbody id="normalthread_4169323">
<tr>
<!--2011.11.30增加style-->
<td class="icn" style="border:1px solid #000;width:50px;text-align:center" bgcolor="#F0F3FA">
<!-- 这里删除一堆的东西将原文件copy这 -->
<center>
<a href="thread-4169323-1-1.html" title="新窗口打开" target="_blank">
<img src="http://cu.img168.net/static/image/common//folder_common.gif" style="margin-left:-5px"/></a>
</center>
</td>
<th class="common" style="border:1px solid #000" colspan="2" bgcolor="#fafbfc">
&nbsp;&nbsp;
<!--将管理选项置顶图标移到标题td中 -->

<!--2011.11.30特殊主题图标 -->

<!--2011.12.01精华图标 -->


<em>[<a href="forum.php?mod=forumdisplay&fid=23&amp;filter=typeid&amp;typeid=23">C</a>]</em> <a href="thread-4169323-1-1.html" onclick="atarget(this)" class="xst" >发布一个开源的C函数接口的网络爬虫引擎</a>
<span class="tps">&nbsp;...<a href="thread-4169323-2-1.html">2</a></span>
</th>
<td class="by" style="border:1px solid #000;width:114px;text-align:center" bgcolor="#F0F3FA">
<cite>
<a href="space-uid-20131792.html" c="1">BetonArmEE</a></cite>
<em><span>2015-02-08</span></em>
</td>
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#fafbfc">
<a href="thread-4169323-1-1.html" class="xi2">19</a>
</td>
<!--加一列 -->
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#F0F3FA">
<em>991</em>
</td>
<td class="by" style="border:1px solid #000;text-align:center;width:115px" bgcolor="#fafbfc">
<cite><a href="space-username-leiing.html" c="1">leiing</a></cite>
<em><a href="forum.php?mod=redirect&tid=4169323&goto=lastpost#lastpost">2015-02-10 23:15</a></em>
</td>
</tr>
</tbody>
<tbody id="normalthread_4169470">
<tr>
<!--2011.11.30增加style-->
<td class="icn" style="border:1px solid #000;width:50px;text-align:center" bgcolor="#F0F3FA">
<!-- 这里删除一堆的东西将原文件copy这 -->
<center>
<a href="thread-4169470-1-1.html" title="新窗口打开" target="_blank">
<img src="http://cu.img168.net/static/image/common//folder_common.gif" style="margin-left:-5px"/></a>
</center>
</td>
<th class="common" style="border:1px solid #000" colspan="2" bgcolor="#fafbfc">
&nbsp;&nbsp;
<!--将管理选项置顶图标移到标题td中 -->

<!--2011.11.30特殊主题图标 -->

<!--2011.12.01精华图标 -->


<em>[<a href="forum.php?mod=forumdisplay&fid=23&amp;filter=typeid&amp;typeid=23">C</a>]</em> <a href="thread-4169470-1-1.html" onclick="atarget(this)" class="xst" >什么时候需要用到SIGSTOP?</a>
</th>
<td class="by" style="border:1px solid #000;width:114px;text-align:center" bgcolor="#F0F3FA">
<cite>
<a href="space-uid-30093195.html" c="1">cdsfiui</a></cite>
<em><span>2015-02-09</span></em>
</td>
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#fafbfc">
<a href="thread-4169470-1-1.html" class="xi2">4</a>
</td>
<!--加一列 -->
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#F0F3FA">
<em>322</em>
</td>
<td class="by" style="border:1px solid #000;text-align:center;width:115px" bgcolor="#fafbfc">
<cite><a href="space-username-wait_rabbit.html" c="1">wait_rabbit</a></cite>
<em><a href="forum.php?mod=redirect&tid=4169470&goto=lastpost#lastpost">2015-02-10 21:58</a></em>
</td>
</tr>
</tbody>
<tbody id="normalthread_4061367">
<tr>
<!--2011.11.30增加style-->
<td class="icn" style="border:1px solid #000;width:50px;text-align:center" bgcolor="#F0F3FA">
<!-- 这里删除一堆的东西将原文件copy这 -->
<center>
<a href="thread-4061367-1-1.html" title="新窗口打开" target="_blank">
<img src="http://cu.img168.net/static/image/common//folder_common.gif" style="margin-left:-5px"/></a>
</center>
</td>
<th class="common" style="border:1px solid #000" colspan="2" bgcolor="#fafbfc">
&nbsp;&nbsp;
<!--将管理选项置顶图标移到标题td中 -->

<!--2011.11.30特殊主题图标 -->

<!--2011.12.01精华图标 -->


<em>[<a href="forum.php?mod=forumdisplay&fid=23&amp;filter=typeid&amp;typeid=23">C</a>]</em> <a href="thread-4061367-1-1.html" onclick="atarget(this)" class="xst" >GDM登录代码分析--登录界面显示用户名提示</a>
</th>
<td class="by" style="border:1px solid #000;width:114px;text-align:center" bgcolor="#F0F3FA">
<cite>
<a href="space-uid-28378679.html" c="1">liuaiping0205</a></cite>
<em><span>2012-12-29</span></em>
</td>
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#fafbfc">
<a href="thread-4061367-1-1.html" class="xi2">3</a>
</td>
<!--加一列 -->
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#F0F3FA">
<em>1923</em>
</td>
<td class="by" style="border:1px solid #000;text-align:center;width:115px" bgcolor="#fafbfc">
<cite><a href="space-username-fender0107401.html" c="1">fender0107401</a></cite>
<em><a href="forum.php?mod=redirect&tid=4061367&goto=lastpost#lastpost">2015-02-10 15:58</a></em>
</td>
</tr>
</tbody>
<tbody id="normalthread_4169431">
<tr>
<!--2011.11.30增加style-->
<td class="icn" style="border:1px solid #000;width:50px;text-align:center" bgcolor="#F0F3FA">
<!-- 这里删除一堆的东西将原文件copy这 -->
<center>
<a href="thread-4169431-1-1.html" title="新窗口打开" target="_blank">
<img src="http://cu.img168.net/static/image/common//folder_common.gif" style="margin-left:-5px"/></a>
</center>
</td>
<th class="common" style="border:1px solid #000" colspan="2" bgcolor="#fafbfc">
&nbsp;&nbsp;
<!--将管理选项置顶图标移到标题td中 -->

<!--2011.11.30特殊主题图标 -->

<!--2011.12.01精华图标 -->


<em>[<a href="forum.php?mod=forumdisplay&fid=23&amp;filter=typeid&amp;typeid=23">C</a>]</em> <a href="thread-4169431-1-1.html" onclick="atarget(this)" class="xst" >请教ngnix的问题</a>
</th>
<td class="by" style="border:1px solid #000;width:114px;text-align:center" bgcolor="#F0F3FA">
<cite>
<a href="space-uid-29446293.html" c="1">zhendehaoren</a></cite>
<em><span>2015-02-09</span></em>
</td>
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#fafbfc">
<a href="thread-4169431-1-1.html" class="xi2">7</a>
</td>
<!--加一列 -->
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#F0F3FA">
<em>331</em>
</td>
<td class="by" style="border:1px solid #000;text-align:center;width:115px" bgcolor="#fafbfc">
<cite><a href="space-username-zhendehaoren.html" c="1">zhendehaoren</a></cite>
<em><a href="forum.php?mod=redirect&tid=4169431&goto=lastpost#lastpost">2015-02-10 12:22</a></em>
</td>
</tr>
</tbody>
<tbody id="normalthread_4169571">
<tr>
<!--2011.11.30增加style-->
<td class="icn" style="border:1px solid #000;width:50px;text-align:center" bgcolor="#F0F3FA">
<!-- 这里删除一堆的东西将原文件copy这 -->
<center>
<a href="thread-4169571-1-1.html" title="新窗口打开" target="_blank">
<img src="http://cu.img168.net/static/image/common//folder_common.gif" style="margin-left:-5px"/></a>
</center>
</td>
<th class="common" style="border:1px solid #000" colspan="2" bgcolor="#fafbfc">
&nbsp;&nbsp;
<!--将管理选项置顶图标移到标题td中 -->

<!--2011.11.30特殊主题图标 -->

<!--2011.12.01精华图标 -->


<em>[<a href="forum.php?mod=forumdisplay&fid=23&amp;filter=typeid&amp;typeid=23">C</a>]</em> <a href="thread-4169571-1-1.html" onclick="atarget(this)" class="xst" >预定义宏__FILE__和__LINE__替换不正确【已解决】</a>
</th>
<td class="by" style="border:1px solid #000;width:114px;text-align:center" bgcolor="#F0F3FA">
<cite>
<a href="space-uid-29957428.html" c="1">vesontio</a></cite>
<em><span>2015-02-10</span></em>
</td>
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#fafbfc">
<a href="thread-4169571-1-1.html" class="xi2">2</a>
</td>
<!--加一列 -->
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#F0F3FA">
<em>219</em>
</td>
<td class="by" style="border:1px solid #000;text-align:center;width:115px" bgcolor="#fafbfc">
<cite><a href="space-username-vesontio.html" c="1">vesontio</a></cite>
<em><a href="forum.php?mod=redirect&tid=4169571&goto=lastpost#lastpost">2015-02-10 11:07</a></em>
</td>
</tr>
</tbody>
<tbody id="normalthread_4169481">
<tr>
<!--2011.11.30增加style-->
<td class="icn" style="border:1px solid #000;width:50px;text-align:center" bgcolor="#F0F3FA">
<!-- 这里删除一堆的东西将原文件copy这 -->
<center>
<a href="thread-4169481-1-1.html" title="新窗口打开" target="_blank">
<img src="http://cu.img168.net/static/image/common//folder_common.gif" style="margin-left:-5px"/></a>
</center>
</td>
<th class="common" style="border:1px solid #000" colspan="2" bgcolor="#fafbfc">
&nbsp;&nbsp;
<!--将管理选项置顶图标移到标题td中 -->

<!--2011.11.30特殊主题图标 -->

<!--2011.12.01精华图标 -->


<em>[<a href="forum.php?mod=forumdisplay&fid=23&amp;filter=typeid&amp;typeid=22">C++</a>]</em> <a href="thread-4169481-1-1.html" onclick="atarget(this)" class="xst" >如何用函数模板实现为指定数据类型分配内存的功能？下面这样写不对啊</a>
</th>
<td class="by" style="border:1px solid #000;width:114px;text-align:center" bgcolor="#F0F3FA">
<cite>
<a href="space-uid-29682708.html" c="1">新用户_请注册</a></cite>
<em><span>2015-02-09</span></em>
</td>
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#fafbfc">
<a href="thread-4169481-1-1.html" class="xi2">9</a>
</td>
<!--加一列 -->
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#F0F3FA">
<em>393</em>
</td>
<td class="by" style="border:1px solid #000;text-align:center;width:115px" bgcolor="#fafbfc">
<cite><a href="space-username-hellioncu.html" c="1"><font color='#f6c500'>hellioncu</font><em style='display: inline-block;width: 16px;height: 9px;background: url(source/plugin/auction/images/v.jpg) no-repeat;overflow: hidden;'></em></a></cite>
<em><a href="forum.php?mod=redirect&tid=4169481&goto=lastpost#lastpost">2015-02-10 10:19</a></em>
</td>
</tr>
</tbody>
<tbody id="normalthread_4166348">
<tr>
<!--2011.11.30增加style-->
<td class="icn" style="border:1px solid #000;width:50px;text-align:center" bgcolor="#F0F3FA">
<!-- 这里删除一堆的东西将原文件copy这 -->
<center>
<a href="thread-4166348-1-1.html" title="新窗口打开" target="_blank">
<img src="http://cu.img168.net/static/image/common//folder_common.gif" style="margin-left:-5px"/></a>
</center>
</td>
<th class="common" style="border:1px solid #000" colspan="2" bgcolor="#fafbfc">
&nbsp;&nbsp;
<!--将管理选项置顶图标移到标题td中 -->

<!--2011.11.30特殊主题图标 -->

<!--2011.12.01精华图标 -->


<em>[<a href="forum.php?mod=forumdisplay&fid=23&amp;filter=typeid&amp;typeid=25">函数</a>]</em> <a href="thread-4166348-1-1.html" onclick="atarget(this)" class="xst" >要写一个file_copy函数</a>
<span class="tps">&nbsp;...<a href="thread-4166348-2-1.html">2</a><a href="thread-4166348-3-1.html">3</a></span>
</th>
<td class="by" style="border:1px solid #000;width:114px;text-align:center" bgcolor="#F0F3FA">
<cite>
<a href="space-uid-29245601.html" c="1">Herowinter</a></cite>
<em><span>2015-01-13</span></em>
</td>
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#fafbfc">
<a href="thread-4166348-1-1.html" class="xi2">27</a>
</td>
<!--加一列 -->
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#F0F3FA">
<em>2037</em>
</td>
<td class="by" style="border:1px solid #000;text-align:center;width:115px" bgcolor="#fafbfc">
<cite><a href="space-username-lost_templar.html" c="1">lost_templar</a></cite>
<em><a href="forum.php?mod=redirect&tid=4166348&goto=lastpost#lastpost">2015-02-09 22:23</a></em>
</td>
</tr>
</tbody>
<tbody id="normalthread_4168718">
<tr>
<!--2011.11.30增加style-->
<td class="icn" style="border:1px solid #000;width:50px;text-align:center" bgcolor="#F0F3FA">
<!-- 这里删除一堆的东西将原文件copy这 -->
<center>
<a href="thread-4168718-1-1.html" title="新窗口打开" target="_blank">
<img src="http://cu.img168.net/static/image/common//folder_common.gif" style="margin-left:-5px"/></a>
</center>
</td>
<th class="common" style="border:1px solid #000" colspan="2" bgcolor="#fafbfc">
&nbsp;&nbsp;
<!--将管理选项置顶图标移到标题td中 -->

<!--2011.11.30特殊主题图标 -->

<!--2011.12.01精华图标 -->


<em>[<a href="forum.php?mod=forumdisplay&fid=23&amp;filter=typeid&amp;typeid=23">C</a>]</em> <a href="thread-4168718-1-1.html" onclick="atarget(this)" class="xst" >请问Linux下有什么比较好的文件加密程序/方法？</a>
<span class="tps">&nbsp;...<a href="thread-4168718-2-1.html">2</a><a href="thread-4168718-3-1.html">3</a></span>
</th>
<td class="by" style="border:1px solid #000;width:114px;text-align:center" bgcolor="#F0F3FA">
<cite>
<a href="space-uid-7702100.html" c="1">robin10</a></cite>
<em><span>2015-02-03</span></em>
</td>
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#fafbfc">
<a href="thread-4168718-1-1.html" class="xi2">22</a>
</td>
<!--加一列 -->
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#F0F3FA">
<em>1337</em>
</td>
<td class="by" style="border:1px solid #000;text-align:center;width:115px" bgcolor="#fafbfc">
<cite><a href="space-username-robin10.html" c="1">robin10</a></cite>
<em><a href="forum.php?mod=redirect&tid=4168718&goto=lastpost#lastpost">2015-02-09 17:04</a></em>
</td>
</tr>
</tbody>
<tbody id="normalthread_4168391">
<tr>
<!--2011.11.30增加style-->
<td class="icn" style="border:1px solid #000;width:50px;text-align:center" bgcolor="#F0F3FA">
<!-- 这里删除一堆的东西将原文件copy这 -->
<center>
<a href="thread-4168391-1-1.html" title="新窗口打开" target="_blank">
<img src="http://cu.img168.net/static/image/common//folder_common.gif" style="margin-left:-5px"/></a>
</center>
</td>
<th class="common" style="border:1px solid #000" colspan="2" bgcolor="#fafbfc">
&nbsp;&nbsp;
<!--将管理选项置顶图标移到标题td中 -->

<!--2011.11.30特殊主题图标 -->

<!--2011.12.01精华图标 -->


<em>[<a href="forum.php?mod=forumdisplay&fid=23&amp;filter=typeid&amp;typeid=25">函数</a>]</em> <a href="thread-4168391-1-1.html" onclick="atarget(this)" class="xst" >关于select函数的问题</a>
<span class="tps">&nbsp;...<a href="thread-4168391-2-1.html">2</a></span>
</th>
<td class="by" style="border:1px solid #000;width:114px;text-align:center" bgcolor="#F0F3FA">
<cite>
<a href="space-uid-30088674.html" c="1">AnkerLi</a></cite>
<em><span>2015-01-30</span></em>
</td>
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#fafbfc">
<a href="thread-4168391-1-1.html" class="xi2">16</a>
</td>
<!--加一列 -->
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#F0F3FA">
<em>1319</em>
</td>
<td class="by" style="border:1px solid #000;text-align:center;width:115px" bgcolor="#fafbfc">
<cite><a href="space-username-kaede_1.html" c="1">kaede_1<em style='display: inline-block;width: 16px;height: 9px;background: url(source/plugin/auction/images/v.jpg) no-repeat;overflow: hidden;'></em></a></cite>
<em><a href="forum.php?mod=redirect&tid=4168391&goto=lastpost#lastpost">2015-02-09 15:23</a></em>
</td>
</tr>
</tbody>
<tbody id="normalthread_4169465">
<tr>
<!--2011.11.30增加style-->
<td class="icn" style="border:1px solid #000;width:50px;text-align:center" bgcolor="#F0F3FA">
<!-- 这里删除一堆的东西将原文件copy这 -->
<center>
<a href="thread-4169465-1-1.html" title="新窗口打开" target="_blank">
<img src="http://cu.img168.net/static/image/common//folder_common.gif" style="margin-left:-5px"/></a>
</center>
</td>
<th class="common" style="border:1px solid #000" colspan="2" bgcolor="#fafbfc">
&nbsp;&nbsp;
<!--将管理选项置顶图标移到标题td中 -->

<!--2011.11.30特殊主题图标 -->

<!--2011.12.01精华图标 -->


<em>[<a href="forum.php?mod=forumdisplay&fid=23&amp;filter=typeid&amp;typeid=22">C++</a>]</em> <a href="thread-4169465-1-1.html" onclick="atarget(this)" class="xst" >C++14 标准草案投票获得一致通过</a>
</th>
<td class="by" style="border:1px solid #000;width:114px;text-align:center" bgcolor="#F0F3FA">
<cite>
<a href="space-uid-29968779.html" c="1">kg假装无所谓</a></cite>
<em><span>2015-02-09</span></em>
</td>
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#fafbfc">
<a href="thread-4169465-1-1.html" class="xi2">0</a>
</td>
<!--加一列 -->
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#F0F3FA">
<em>276</em>
</td>
<td class="by" style="border:1px solid #000;text-align:center;width:115px" bgcolor="#fafbfc">
<cite><a href="space-username-kg%BC%D9%D7%B0%CE%DE%CB%F9%CE%BD.html" c="1">kg假装无所谓</a></cite>
<em><a href="forum.php?mod=redirect&tid=4169465&goto=lastpost#lastpost">2015-02-09 15:21</a></em>
</td>
</tr>
</tbody>
<tbody id="normalthread_4169464">
<tr>
<!--2011.11.30增加style-->
<td class="icn" style="border:1px solid #000;width:50px;text-align:center" bgcolor="#F0F3FA">
<!-- 这里删除一堆的东西将原文件copy这 -->
<center>
<a href="thread-4169464-1-1.html" title="新窗口打开" target="_blank">
<img src="http://cu.img168.net/static/image/common//folder_common.gif" style="margin-left:-5px"/></a>
</center>
</td>
<th class="common" style="border:1px solid #000" colspan="2" bgcolor="#fafbfc">
&nbsp;&nbsp;
<!--将管理选项置顶图标移到标题td中 -->

<!--2011.11.30特殊主题图标 -->

<!--2011.12.01精华图标 -->


<em>[<a href="forum.php?mod=forumdisplay&fid=23&amp;filter=typeid&amp;typeid=22">C++</a>]</em> <a href="thread-4169464-1-1.html" onclick="atarget(this)" class="xst" >Java与C++人气出现历史新低？程序员们不必太过惊慌</a>
</th>
<td class="by" style="border:1px solid #000;width:114px;text-align:center" bgcolor="#F0F3FA">
<cite>
<a href="space-uid-29968779.html" c="1">kg假装无所谓</a></cite>
<em><span>2015-02-09</span></em>
</td>
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#fafbfc">
<a href="thread-4169464-1-1.html" class="xi2">0</a>
</td>
<!--加一列 -->
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#F0F3FA">
<em>309</em>
</td>
<td class="by" style="border:1px solid #000;text-align:center;width:115px" bgcolor="#fafbfc">
<cite><a href="space-username-kg%BC%D9%D7%B0%CE%DE%CB%F9%CE%BD.html" c="1">kg假装无所谓</a></cite>
<em><a href="forum.php?mod=redirect&tid=4169464&goto=lastpost#lastpost">2015-02-09 15:19</a></em>
</td>
</tr>
</tbody>
<tbody id="normalthread_4169463">
<tr>
<!--2011.11.30增加style-->
<td class="icn" style="border:1px solid #000;width:50px;text-align:center" bgcolor="#F0F3FA">
<!-- 这里删除一堆的东西将原文件copy这 -->
<center>
<a href="thread-4169463-1-1.html" title="新窗口打开" target="_blank">
<img src="http://cu.img168.net/static/image/common//folder_common.gif" style="margin-left:-5px"/></a>
</center>
</td>
<th class="common" style="border:1px solid #000" colspan="2" bgcolor="#fafbfc">
&nbsp;&nbsp;
<!--将管理选项置顶图标移到标题td中 -->

<!--2011.11.30特殊主题图标 -->

<!--2011.12.01精华图标 -->


<em>[<a href="forum.php?mod=forumdisplay&fid=23&amp;filter=typeid&amp;typeid=22">C++</a>]</em> <a href="thread-4169463-1-1.html" onclick="atarget(this)" class="xst" >CppDepend现已支持C和C++14</a>
</th>
<td class="by" style="border:1px solid #000;width:114px;text-align:center" bgcolor="#F0F3FA">
<cite>
<a href="space-uid-29968779.html" c="1">kg假装无所谓</a></cite>
<em><span>2015-02-09</span></em>
</td>
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#fafbfc">
<a href="thread-4169463-1-1.html" class="xi2">0</a>
</td>
<!--加一列 -->
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#F0F3FA">
<em>239</em>
</td>
<td class="by" style="border:1px solid #000;text-align:center;width:115px" bgcolor="#fafbfc">
<cite><a href="space-username-kg%BC%D9%D7%B0%CE%DE%CB%F9%CE%BD.html" c="1">kg假装无所谓</a></cite>
<em><a href="forum.php?mod=redirect&tid=4169463&goto=lastpost#lastpost">2015-02-09 15:16</a></em>
</td>
</tr>
</tbody>
<tbody id="normalthread_4169462">
<tr>
<!--2011.11.30增加style-->
<td class="icn" style="border:1px solid #000;width:50px;text-align:center" bgcolor="#F0F3FA">
<!-- 这里删除一堆的东西将原文件copy这 -->
<center>
<a href="thread-4169462-1-1.html" title="新窗口打开" target="_blank">
<img src="http://cu.img168.net/static/image/common//folder_common.gif" style="margin-left:-5px"/></a>
</center>
</td>
<th class="common" style="border:1px solid #000" colspan="2" bgcolor="#fafbfc">
&nbsp;&nbsp;
<!--将管理选项置顶图标移到标题td中 -->

<!--2011.11.30特殊主题图标 -->

<!--2011.12.01精华图标 -->


<em>[<a href="forum.php?mod=forumdisplay&fid=23&amp;filter=typeid&amp;typeid=22">C++</a>]</em> <a href="thread-4169462-1-1.html" onclick="atarget(this)" class="xst" >Facebook发布C++ HTTP框架Proxygen</a>
<img src="static/image/filetype/image_s.gif" alt="attach_img" title="图片附件" align="absmiddle" />
</th>
<td class="by" style="border:1px solid #000;width:114px;text-align:center" bgcolor="#F0F3FA">
<cite>
<a href="space-uid-29968779.html" c="1">kg假装无所谓</a></cite>
<em><span>2015-02-09</span></em>
</td>
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#fafbfc">
<a href="thread-4169462-1-1.html" class="xi2">0</a>
</td>
<!--加一列 -->
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#F0F3FA">
<em>240</em>
</td>
<td class="by" style="border:1px solid #000;text-align:center;width:115px" bgcolor="#fafbfc">
<cite><a href="space-username-kg%BC%D9%D7%B0%CE%DE%CB%F9%CE%BD.html" c="1">kg假装无所谓</a></cite>
<em><a href="forum.php?mod=redirect&tid=4169462&goto=lastpost#lastpost">2015-02-09 15:12</a></em>
</td>
</tr>
</tbody>
<tbody id="normalthread_4169459">
<tr>
<!--2011.11.30增加style-->
<td class="icn" style="border:1px solid #000;width:50px;text-align:center" bgcolor="#F0F3FA">
<!-- 这里删除一堆的东西将原文件copy这 -->
<center>
<a href="thread-4169459-1-1.html" title="新窗口打开" target="_blank">
<img src="http://cu.img168.net/static/image/common//folder_common.gif" style="margin-left:-5px"/></a>
</center>
</td>
<th class="common" style="border:1px solid #000" colspan="2" bgcolor="#fafbfc">
&nbsp;&nbsp;
<!--将管理选项置顶图标移到标题td中 -->

<!--2011.11.30特殊主题图标 -->

<!--2011.12.01精华图标 -->


<em>[<a href="forum.php?mod=forumdisplay&fid=23&amp;filter=typeid&amp;typeid=22">C++</a>]</em> <a href="thread-4169459-1-1.html" onclick="atarget(this)" class="xst" >C++之父：公众对C++的五个普遍误解</a>
</th>
<td class="by" style="border:1px solid #000;width:114px;text-align:center" bgcolor="#F0F3FA">
<cite>
<a href="space-uid-29968779.html" c="1">kg假装无所谓</a></cite>
<em><span>2015-02-09</span></em>
</td>
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#fafbfc">
<a href="thread-4169459-1-1.html" class="xi2">0</a>
</td>
<!--加一列 -->
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#F0F3FA">
<em>272</em>
</td>
<td class="by" style="border:1px solid #000;text-align:center;width:115px" bgcolor="#fafbfc">
<cite><a href="space-username-kg%BC%D9%D7%B0%CE%DE%CB%F9%CE%BD.html" c="1">kg假装无所谓</a></cite>
<em><a href="forum.php?mod=redirect&tid=4169459&goto=lastpost#lastpost">2015-02-09 15:02</a></em>
</td>
</tr>
</tbody>
<tbody id="normalthread_4169457">
<tr>
<!--2011.11.30增加style-->
<td class="icn" style="border:1px solid #000;width:50px;text-align:center" bgcolor="#F0F3FA">
<!-- 这里删除一堆的东西将原文件copy这 -->
<center>
<a href="thread-4169457-1-1.html" title="新窗口打开" target="_blank">
<img src="http://cu.img168.net/static/image/common//folder_common.gif" style="margin-left:-5px"/></a>
</center>
</td>
<th class="common" style="border:1px solid #000" colspan="2" bgcolor="#fafbfc">
&nbsp;&nbsp;
<!--将管理选项置顶图标移到标题td中 -->

<!--2011.11.30特殊主题图标 -->

<!--2011.12.01精华图标 -->


<em>[<a href="forum.php?mod=forumdisplay&fid=23&amp;filter=typeid&amp;typeid=22">C++</a>]</em> <a href="thread-4169457-1-1.html" onclick="atarget(this)" class="xst" >C++2015前瞻</a>
</th>
<td class="by" style="border:1px solid #000;width:114px;text-align:center" bgcolor="#F0F3FA">
<cite>
<a href="space-uid-29968779.html" c="1">kg假装无所谓</a></cite>
<em><span>2015-02-09</span></em>
</td>
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#fafbfc">
<a href="thread-4169457-1-1.html" class="xi2">0</a>
</td>
<!--加一列 -->
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#F0F3FA">
<em>236</em>
</td>
<td class="by" style="border:1px solid #000;text-align:center;width:115px" bgcolor="#fafbfc">
<cite><a href="space-username-kg%BC%D9%D7%B0%CE%DE%CB%F9%CE%BD.html" c="1">kg假装无所谓</a></cite>
<em><a href="forum.php?mod=redirect&tid=4169457&goto=lastpost#lastpost">2015-02-09 14:56</a></em>
</td>
</tr>
</tbody>
<tbody id="normalthread_4169456">
<tr>
<!--2011.11.30增加style-->
<td class="icn" style="border:1px solid #000;width:50px;text-align:center" bgcolor="#F0F3FA">
<!-- 这里删除一堆的东西将原文件copy这 -->
<center>
<a href="thread-4169456-1-1.html" title="新窗口打开" target="_blank">
<img src="http://cu.img168.net/static/image/common//folder_common.gif" style="margin-left:-5px"/></a>
</center>
</td>
<th class="common" style="border:1px solid #000" colspan="2" bgcolor="#fafbfc">
&nbsp;&nbsp;
<!--将管理选项置顶图标移到标题td中 -->

<!--2011.11.30特殊主题图标 -->

<!--2011.12.01精华图标 -->


<em>[<a href="forum.php?mod=forumdisplay&fid=23&amp;filter=typeid&amp;typeid=22">C++</a>]</em> <a href="thread-4169456-1-1.html" onclick="atarget(this)" class="xst" >fastrpc 2.0 发布，高性能 C++ 服务器框架</a>
</th>
<td class="by" style="border:1px solid #000;width:114px;text-align:center" bgcolor="#F0F3FA">
<cite>
<a href="space-uid-29968779.html" c="1">kg假装无所谓</a></cite>
<em><span>2015-02-09</span></em>
</td>
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#fafbfc">
<a href="thread-4169456-1-1.html" class="xi2">0</a>
</td>
<!--加一列 -->
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#F0F3FA">
<em>215</em>
</td>
<td class="by" style="border:1px solid #000;text-align:center;width:115px" bgcolor="#fafbfc">
<cite><a href="space-username-kg%BC%D9%D7%B0%CE%DE%CB%F9%CE%BD.html" c="1">kg假装无所谓</a></cite>
<em><a href="forum.php?mod=redirect&tid=4169456&goto=lastpost#lastpost">2015-02-09 14:54</a></em>
</td>
</tr>
</tbody>
<tbody id="normalthread_4162308">
<tr>
<!--2011.11.30增加style-->
<td class="icn" style="border:1px solid #000;width:50px;text-align:center" bgcolor="#F0F3FA">
<!-- 这里删除一堆的东西将原文件copy这 -->
<center>
<a href="thread-4162308-1-1.html" title="新窗口打开" target="_blank">
<img src="http://cu.img168.net/static/image/common//folder_common.gif" style="margin-left:-5px"/></a>
</center>
</td>
<th class="common" style="border:1px solid #000" colspan="2" bgcolor="#fafbfc">
&nbsp;&nbsp;
<!--将管理选项置顶图标移到标题td中 -->

<!--2011.11.30特殊主题图标 -->
<img src="static/image/common/pollsmall.gif" alt="投票">

<!--2011.12.01精华图标 -->


<em>[<a href="forum.php?mod=forumdisplay&fid=23&amp;filter=typeid&amp;typeid=460">技术动态</a>]</em> <a href="thread-4162308-1-1.html" onclick="atarget(this)" class="xst" >你更喜欢C还是C++。</a>
<img src="static/image/filetype/image_s.gif" alt="attach_img" title="图片附件" align="absmiddle" />
<span class="tps">&nbsp;...<a href="thread-4162308-2-1.html">2</a><a href="thread-4162308-3-1.html">3</a><a href="thread-4162308-4-1.html">4</a><a href="thread-4162308-5-1.html">5</a></span>
</th>
<td class="by" style="border:1px solid #000;width:114px;text-align:center" bgcolor="#F0F3FA">
<cite>
<a href="space-uid-20679983.html" c="1">fender0107401</a></cite>
<em><span>2014-11-28</span></em>
</td>
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#fafbfc">
<a href="thread-4162308-1-1.html" class="xi2">43</a>
</td>
<!--加一列 -->
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#F0F3FA">
<em>4300</em>
</td>
<td class="by" style="border:1px solid #000;text-align:center;width:115px" bgcolor="#fafbfc">
<cite><a href="space-username-321test123.html" c="1">321test123</a></cite>
<em><a href="forum.php?mod=redirect&tid=4162308&goto=lastpost#lastpost">2015-02-09 14:53</a></em>
</td>
</tr>
</tbody>
<tbody id="normalthread_4169455">
<tr>
<!--2011.11.30增加style-->
<td class="icn" style="border:1px solid #000;width:50px;text-align:center" bgcolor="#F0F3FA">
<!-- 这里删除一堆的东西将原文件copy这 -->
<center>
<a href="thread-4169455-1-1.html" title="新窗口打开" target="_blank">
<img src="http://cu.img168.net/static/image/common//folder_common.gif" style="margin-left:-5px"/></a>
</center>
</td>
<th class="common" style="border:1px solid #000" colspan="2" bgcolor="#fafbfc">
&nbsp;&nbsp;
<!--将管理选项置顶图标移到标题td中 -->

<!--2011.11.30特殊主题图标 -->

<!--2011.12.01精华图标 -->


<em>[<a href="forum.php?mod=forumdisplay&fid=23&amp;filter=typeid&amp;typeid=22">C++</a>]</em> <a href="thread-4169455-1-1.html" onclick="atarget(this)" class="xst" >功能强大的 C++ redis 客户端库增加至 acl 项目中</a>
</th>
<td class="by" style="border:1px solid #000;width:114px;text-align:center" bgcolor="#F0F3FA">
<cite>
<a href="space-uid-29968779.html" c="1">kg假装无所谓</a></cite>
<em><span>2015-02-09</span></em>
</td>
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#fafbfc">
<a href="thread-4169455-1-1.html" class="xi2">0</a>
</td>
<!--加一列 -->
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#F0F3FA">
<em>185</em>
</td>
<td class="by" style="border:1px solid #000;text-align:center;width:115px" bgcolor="#fafbfc">
<cite><a href="space-username-kg%BC%D9%D7%B0%CE%DE%CB%F9%CE%BD.html" c="1">kg假装无所谓</a></cite>
<em><a href="forum.php?mod=redirect&tid=4169455&goto=lastpost#lastpost">2015-02-09 14:52</a></em>
</td>
</tr>
</tbody>
<tbody id="normalthread_4169454">
<tr>
<!--2011.11.30增加style-->
<td class="icn" style="border:1px solid #000;width:50px;text-align:center" bgcolor="#F0F3FA">
<!-- 这里删除一堆的东西将原文件copy这 -->
<center>
<a href="thread-4169454-1-1.html" title="新窗口打开" target="_blank">
<img src="http://cu.img168.net/static/image/common//folder_common.gif" style="margin-left:-5px"/></a>
</center>
</td>
<th class="common" style="border:1px solid #000" colspan="2" bgcolor="#fafbfc">
&nbsp;&nbsp;
<!--将管理选项置顶图标移到标题td中 -->

<!--2011.11.30特殊主题图标 -->

<!--2011.12.01精华图标 -->


<em>[<a href="forum.php?mod=forumdisplay&fid=23&amp;filter=typeid&amp;typeid=22">C++</a>]</em> <a href="thread-4169454-1-1.html" onclick="atarget(this)" class="xst" >SonarQube C / C++ / Objective-C 3.4 发布</a>
</th>
<td class="by" style="border:1px solid #000;width:114px;text-align:center" bgcolor="#F0F3FA">
<cite>
<a href="space-uid-29968779.html" c="1">kg假装无所谓</a></cite>
<em><span>2015-02-09</span></em>
</td>
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#fafbfc">
<a href="thread-4169454-1-1.html" class="xi2">0</a>
</td>
<!--加一列 -->
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#F0F3FA">
<em>174</em>
</td>
<td class="by" style="border:1px solid #000;text-align:center;width:115px" bgcolor="#fafbfc">
<cite><a href="space-username-kg%BC%D9%D7%B0%CE%DE%CB%F9%CE%BD.html" c="1">kg假装无所谓</a></cite>
<em><a href="forum.php?mod=redirect&tid=4169454&goto=lastpost#lastpost">2015-02-09 14:48</a></em>
</td>
</tr>
</tbody>
<tbody id="normalthread_4168554">
<tr>
<!--2011.11.30增加style-->
<td class="icn" style="border:1px solid #000;width:50px;text-align:center" bgcolor="#F0F3FA">
<!-- 这里删除一堆的东西将原文件copy这 -->
<center>
<a href="thread-4168554-1-1.html" title="新窗口打开" target="_blank">
<img src="http://cu.img168.net/static/image/common//folder_common.gif" style="margin-left:-5px"/></a>
</center>
</td>
<th class="common" style="border:1px solid #000" colspan="2" bgcolor="#fafbfc">
&nbsp;&nbsp;
<!--将管理选项置顶图标移到标题td中 -->

<!--2011.11.30特殊主题图标 -->

<!--2011.12.01精华图标 -->


<em>[<a href="forum.php?mod=forumdisplay&fid=23&amp;filter=typeid&amp;typeid=23">C</a>]</em> <a href="thread-4168554-1-1.html" onclick="atarget(this)" class="xst" >关闭stdout然后再次打开，发现不能工作了</a>
<span class="tps">&nbsp;...<a href="thread-4168554-2-1.html">2</a></span>
</th>
<td class="by" style="border:1px solid #000;width:114px;text-align:center" bgcolor="#F0F3FA">
<cite>
<a href="space-uid-30093195.html" c="1">cdsfiui</a></cite>
<em><span>2015-02-02</span></em>
</td>
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#fafbfc">
<a href="thread-4168554-1-1.html" class="xi2">19</a>
</td>
<!--加一列 -->
<td class="num" style="border:1px solid #000;text-align:center" bgcolor="#F0F3FA">
<em>1217</em>
</td>
<td class="by" style="border:1px solid #000;text-align:center;width:115px" bgcolor="#fafbfc">
<cite><a href="space-username-wuxiao331234.html" c="1">wuxiao331234</a></cite>
<em><a href="forum.php?mod=redirect&tid=4168554&goto=lastpost#lastpost">2015-02-09 14:37</a></em>
</td>
</tr>
</tbody>
</table><!-- end of table "forum_G[fid]" branch 1/3 -->
</form>
</div>
</div>

<div id="filter_special_menu" class="p_pop" style="display:none" change="location.href='forum.php?mod=forumdisplay&fid=23&filter='+$('filter_special').value">
<ul>
<li><a href="forum-23-1.html">全部主题</a></li>
<li><a href="forum.php?mod=forumdisplay&amp;fid=23&amp;filter=specialtype&amp;specialtype=poll">投票</a></li><li><a href="forum.php?mod=forumdisplay&amp;fid=23&amp;filter=specialtype&amp;specialtype=reward">悬赏</a></li><li><a href="forum.php?mod=forumdisplay&amp;fid=23&amp;filter=specialtype&amp;specialtype=activity">活动</a></li></ul>
</div>
<div id="filter_dateline_menu" class="p_pop" style="display:none">
<ul>
<li><a href="forum.php?mod=forumdisplay&amp;fid=23&amp;orderby=lastpost&amp;filter=dateline">全部时间</a></li>
<li><a href="forum.php?mod=forumdisplay&amp;fid=23&amp;orderby=lastpost&amp;filter=dateline&amp;dateline=86400">一天</a></li>
<li><a href="forum.php?mod=forumdisplay&amp;fid=23&amp;orderby=lastpost&amp;filter=dateline&amp;dateline=172800">两天</a></li>
<li><a href="forum.php?mod=forumdisplay&amp;fid=23&amp;orderby=lastpost&amp;filter=dateline&amp;dateline=604800">一周</a></li>
<li><a href="forum.php?mod=forumdisplay&amp;fid=23&amp;orderby=lastpost&amp;filter=dateline&amp;dateline=2592000">一个月</a></li>
<li><a href="forum.php?mod=forumdisplay&amp;fid=23&amp;orderby=lastpost&amp;filter=dateline&amp;dateline=7948800">三个月</a></li>
</ul>
</div>
<div id="filter_orderby_menu" class="p_pop" style="display:none">
<ul>
<li><a href="forum-23-1.html">默认排序</a></li>
<li><a href="forum.php?mod=forumdisplay&amp;fid=23&amp;filter=author&amp;orderby=dateline">发帖时间</a></li>
<li><a href="forum.php?mod=forumdisplay&amp;fid=23&amp;filter=reply&amp;orderby=replies">回复/查看</a></li>
<li><a href="forum.php?mod=forumdisplay&amp;fid=23&amp;filter=reply&amp;orderby=views">查看</a></li>
<li><a href="forum.php?mod=forumdisplay&amp;fid=23&amp;filter=lastpost&amp;orderby=lastpost">最后发表</a></li>
<li><a href="forum.php?mod=forumdisplay&amp;fid=23&amp;filter=heat&amp;orderby=heats">热门</a></li>
<ul>
</div>
<div class="bm bw0 pgs cl">
<div class="pg"><strong>1</strong><a href="forum-23-2.html">2</a><a href="forum-23-3.html">3</a><a href="forum-23-4.html">4</a><a href="forum-23-5.html">5</a><a href="forum-23-6.html">6</a><a href="forum-23-7.html">7</a><a href="forum-23-8.html">8</a><a href="forum-23-9.html">9</a><a href="forum-23-10.html">10</a><a href="forum-23-1000.html" class="last">... 2127</a><a href="forum-23-2.html" class="nxt">下一页</a><kbd><input type="text" name="custompage" size="5" style="height:22px" onkeydown="if(event.keyCode==13) {window.location='forum.php?mod=forumdisplay&fid=23&amp;page='+this.value; doane(event);}" /></kbd></div><span  class="pgb y"><a href="forum.php">最近访问版块</a></span>
<!--增加版块跳转  -->
<span style="float:right; padding:0px 0 4px 0; margin-top:1px">
<select  style=" padding:5px 0 4px 0" onchange="if(this.options[this.selectedIndex].value != '') {
window.location=('forum-' + this.options[this.selectedIndex].value + '-1.html') }">
<option value="">版块跳转</option>
<optgroup label="--Linux操作系统"><option value="216">新手园地</option><option value="269">&nbsp; &nbsp; &nbsp; 硬件问题</option><option value="217">Linux系统管理</option><option value="218">Linux网络问题</option><option value="223">Linux环境编程</option><option value="271">Linux桌面系统</option><option value="221">国产Linux</option></optgroup><optgroup label="--Unix操作系统"><option value="5">BSD</option><option value="127">&nbsp; &nbsp; &nbsp; BSD文档中心</option><option value="9">AIX</option><option value="193">&nbsp; &nbsp; &nbsp; 新手入门</option><option value="124">&nbsp; &nbsp; &nbsp; AIX文档中心</option><option value="189">&nbsp; &nbsp; &nbsp; 资源下载</option><option value="188">&nbsp; &nbsp; &nbsp; Power高级应用</option><option value="187">&nbsp; &nbsp; &nbsp; IBM存储</option><option value="10">AS400</option><option value="6">Solaris</option><option value="128">&nbsp; &nbsp; &nbsp; Solaris文档中心</option><option value="8">HP-UX</option><option value="129">&nbsp; &nbsp; &nbsp; HP文档中心</option><option value="7">SCO UNIX</option><option value="130">&nbsp; &nbsp; &nbsp; SCO文档中心</option><option value="118">互操作专区</option><option value="12">IRIX</option><option value="11">Tru64 UNIX</option><option value="41">Mac OS X</option></optgroup><optgroup label="--IT运维架构"><option value="141">门户网站运维</option><option value="233">集群和高可用</option><option value="232">服务器应用</option><option value="235">监控和防护</option><option value="283">虚拟化技术</option><option value="185">架构设计</option><option value="285">行业应用和管理</option></optgroup><optgroup label="--IT基础设施"><option value="45">服务器及硬件技术</option><option value="184">&nbsp; &nbsp; &nbsp; 服务器资源下载</option><option value="180">云计算</option><option value="181">&nbsp; &nbsp; &nbsp; 云计算文档中心</option><option value="182">&nbsp; &nbsp; &nbsp; 云计算业界</option><option value="183">&nbsp; &nbsp; &nbsp; 云计算资源下载</option><option value="34">存储备份</option><option value="125">&nbsp; &nbsp; &nbsp; 存储文档中心</option><option value="126">&nbsp; &nbsp; &nbsp; 存储业界</option><option value="145">&nbsp; &nbsp; &nbsp; 存储资源下载</option><option value="194">&nbsp; &nbsp; &nbsp; Symantec技术交流区</option><option value="29">安全技术</option><option value="30">网络技术</option><option value="131">&nbsp; &nbsp; &nbsp; 网络技术文档中心</option></optgroup><optgroup label="--程序设计"><option value="23">C/C++</option><option value="84">&nbsp; &nbsp; &nbsp; GUI编程</option><option value="142">&nbsp; &nbsp; &nbsp; Functional编程</option><option value="224">内核源码</option><option value="220">&nbsp; &nbsp; &nbsp; 内核问题</option><option value="222">移动开发</option><option value="265">&nbsp; &nbsp; &nbsp; 移动开发技术资料</option><option value="24">Shell</option><option value="25">Perl</option><option value="26">Java</option><option value="133">&nbsp; &nbsp; &nbsp; Java文档中心</option><option value="27">PHP</option><option value="135">&nbsp; &nbsp; &nbsp; php文档中心</option><option value="55">Python</option><option value="132">&nbsp; &nbsp; &nbsp; Python文档中心</option><option value="116">Ruby</option><option value="226">CPU与编译器</option><option value="225">嵌入式开发</option><option value="227">驱动开发</option><option value="80">Web开发</option><option value="100">VoIP开发技术</option></optgroup><optgroup label="--数据库技术"><option value="17">MySQL</option><option value="136">&nbsp; &nbsp; &nbsp; MySQL文档中心</option><option value="21">Sybase</option><option value="19">Oracle</option><option value="18">PostgreSQL</option><option value="22">DB2</option><option value="20">Informix</option><option value="140">数据仓库与数据挖掘</option><option value="292">NoSQL技术</option></optgroup><optgroup label="--综合交流区"><option value="46">IT业界新闻与评论</option><option value="32">IT职业生涯</option><option value="293">&nbsp; &nbsp; &nbsp; 猎头招聘</option><option value="82">IT图书与评论</option><option value="156">&nbsp; &nbsp; &nbsp; CU技术图书大系</option><option value="247">&nbsp; &nbsp; &nbsp; Linux书友会</option><option value="54">二手交易</option><option value="249">下载共享</option><option value="250">Linux文档专区</option><option value="53">IT培训与认证</option><option value="295">&nbsp; &nbsp; &nbsp; 培训交流</option><option value="191">&nbsp; &nbsp; &nbsp; 认证培训</option></optgroup><optgroup label="--休闲生活"><option value="31">清茶斋</option><option value="115">投资理财</option><option value="39">运动地带</option><option value="40">快乐数码摄影</option><option value="168">&nbsp; &nbsp; &nbsp; 摄影器材</option><option value="134">&nbsp; &nbsp; &nbsp; 摄影比赛专区</option><option value="121">IT爱车族</option><option value="96">旅游天下</option></optgroup><optgroup label="--站务及频道"><option value="2">站务交流</option><option value="3">版主会议室</option><option value="51">博客SNS站务交流区</option><option value="123">CU活动专区</option><option value="207">&nbsp; &nbsp; &nbsp; Power活动专区</option><option value="169">&nbsp; &nbsp; &nbsp; 拍卖交流区</option><option value="97">频道交流区</option></optgroup></select>
</span>
<a href="javascript:;" id="newspecialtmp" onmouseover="$('newspecial').id = 'newspecialtmp';this.id = 'newspecial';showMenu({'ctrlid':this.id})" onclick="showWindow('newthread', 'forum.php?mod=post&action=newthread&fid=23')" title="发新帖"><img src="http://cu.img168.net/static/image/common//pn_post.png" alt="发新帖" /></a></div><!--[diy=diyfastposttop]--><div id="diyfastposttop" class="area"></div><!--[/diy]-->

<!--[diy=diyforumdisplaybottom]--><div id="diyforumdisplaybottom" class="area"></div><!--[/diy]-->
</div>

</div>
</div>
<script type="text/javascript">document.onkeyup = function(e){keyPageScroll(e, 0, 1, 'forum.php?mod=forumdisplay&fid=23&filter=&orderby=lastpost&', 1);}</script>
<script type="text/javascript">checkForumnew_handle = setTimeout(function () {checkForumnew(23, lasttime);}, checkForumtimeout);</script>

<div class="wp mtn">
<!--[diy=diy3]--><div id="diy3" class="area"></div><!--[/diy]-->
</div>


<!--正在浏览此版块的 -->


<div class="bm" >
<div class="bm_h cl"  style="background-color:#9898BA">
<span class="o y"><a href="forum.php?mod=forumdisplay&amp;fid=23&amp;page=1&amp;showoldetails=yes#online" class="nobdr"><img src="http://cu.img168.net/static/image/common//collapsed_yes.gif" alt="" /></a></span>
<h2><font color="#fff">正在浏览此版块的会员 ()</font></h2>
</div>
</div>

<!--有无新帖图标-->
<div style="padding: 9px;">
<center>
<table width="100%" align="center" style="border-collapse: collapse">
<tbody><tr><td align="center">
<img alt="" src="static/image/common/folder_new.gif">&nbsp; 有新回复
<img alt="" src="static/image/common/folder_hot_new.gif">&nbsp; 有新回复的热门主题
<img alt="" src="static/image/common/folder_lock.gif">&nbsp; 关闭主题
<img alt="" src="static/image/common/folder_common.gif">&nbsp; 无新回复
<img alt="" src="static/image/common/folder_hot_common.gif">&nbsp; 热门主题
</td></tr>
</tbody></table>
<center>
</center></center></div>	</div>
<script type="text/javascript">var cookieLogin = Ajax("TEXT");cookieLogin.get("connect.php?mod=check&op=cookie", function() {});</script><div style="width:960px; margin:0 auto; text-align:center; line-height:18px; padding:0 10px 10px 10px">
<p>北京皓辰网域网络信息技术有限公司. 版权所有 京ICP证:060528号 北京市公安局海淀分局网监中心备案编号：1101082001<br/>
广播电视节目制作经营许可证(京) 字第1234号  中国互联网协会会员&nbsp;&nbsp;联系我们：<img width="139" height="12" border="0" src="static/image/common/adminmail.gif">
<br >感谢所有关心和支持过ChinaUnix的朋友们    转载本站内容请注明原作者名及出处</p>
</div>

<table align="center">
<tr>
<td align="center">
<a href="member.php?mod=clearcookies">清除 Cookies</a> - <a target="_blank" href="http://www.chinaunix.net">ChinaUnix</a>
 	- <a target="_blank" href="archiver/">Archiver</a> - <a target="_blank" href="/">WAP</a> - <a href="#top">TOP</a>
</td>
</tr>
</table>

<!--广告标签 -->
<!--  <script type='text/javascript' src='http://168.it168.com/js/599.js'></script>-->
<!-- <script type='text/javascript' src='http://168.it168.com/js/863.js'></script>-->
<script>if(typeof(BLA)!='undefined'){BLA();}</script>
<!--新版测试广告标签 -->
<script type="text/javascript">
var SeriesId='';
var BrandId='';
</script>
<!-- <script type='text/javascript' src='http://168.it168.com/ajs/599.js'></script> -->
<!-- <script type='text/javascript' src='http://168.it168.com/ajs/863.js'></script> -->

    <!--//ITPUB 腾讯分析代码-->
    &nbsp;&nbsp;<span id="tcss"></span><script type="text/javascript" src="http://tcss.qq.com/ping.js?v=1SLJ" charset="utf-8"></script><script type="text/javascript" reload="1">pgvMain({"discuzParams":{"r2":"8399146","ui":0,"rt":"forum","md":"forumdisplay","fi":"23","pn":1},"virtualDomain":"bbs.chinaunix.net","extraParams":""});</script>            </script>

<div id="g_upmine_menu" class="tip tip_3" style="display:none;">
<div class="tip_c">
积分 0, 距离下一级还需  积分
</div>
<div class="tip_horn"></div>
</div>
<script src="home.php?mod=misc&ac=sendmail&rand=1423633937" type="text/javascript"></script>
<!--回顶部js2011.12.30-->
<script language="javascript">
 lastScrollY=0;
 function heartBeat(){
 var diffY;
 if (document.documentElement && document.documentElement.scrollTop)
     diffY = document.documentElement.scrollTop;
 else if (document.body)
     diffY = document.body.scrollTop
 else
     {/*Netscape stuff*/}
 percent=.1*(diffY-lastScrollY);
 if(percent>0)percent=Math.ceil(percent);
 else percent=Math.floor(percent);
 document.getElementById("full").style.top=parseInt(document.getElementById("full").style.top)+percent+"px";
 lastScrollY=lastScrollY+percent;
 if(lastScrollY<200)
 {
 document.getElementById("full").style.display="none";
 }
 else
 {
 document.getElementById("full").style.display="block";
 }
 }
 var gkuan=document.body.clientWidth;
 var ks=(gkuan-960)/2-30;
 suspendcode="<div id=\"full\" style='right:4px;POSITION:absolute;TOP:500px;z-index:100;width:20px; height:50px;cursor:pointer;'><a href=\"javascript:void(0)\" onclick=\"window.scrollTo(0,0);\"></a></div>"
 document.write(suspendcode);
 window.setInterval("heartBeat()",1);
 </script>


<!-- 统计 START -->
<script src="http://stat.it168.com/pv.js" type="text/javascript" type="text/javascript"></script>
<script type='text/javascript'>
function sendPV(){
    var pvTrack = new PvTrack();
    pvTrack.type = 35; // 频道类别ID
    pvTrack.channel = 22; // 频道ID
    pvTrack.pageType = 0;
    pvTrack.track();
}
window.setTimeout("sendPV()", 0);
</script>
<script type="text/javascript">
  var _gaq = _gaq || [];
  _gaq.push(['_setAccount', 'UA-20237423-2']);
  _gaq.push(['_setDomainName', '.chinaunix.net']);
  _gaq.push(['_trackPageview']);
  (function() {
    var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
    ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
    var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(ga, s);
  })();
</script>
<script type="text/javascript">
var _bdhmProtocol = (("https:" == document.location.protocol) ? " https://" : " http://");
document.write(unescape("%3Cscript src='" + _bdhmProtocol + "hm.baidu.com/h.js?0ee5e8cdc4d43389b3d1bfd76e83216b' type='text/javascript'%3E%3C/script%3E"));
</script>
<!-- 统计 END -->

<!-- 临时加的广告统计 al -->
<!--  临时加的广告统计 阿狸--></body>
</html>
)dddddddddddddd";
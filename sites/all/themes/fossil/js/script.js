(function ($) {
	$(document).ready(function() {


    $(".page-products #sidebartoggle").replaceWith('<a id="sidebartoggle" href="#block-views-exp-new-products-page-1">> Filter Products</a>');
    $(".page-products .sidebar-mobile").after('<div class="sidebar-mobile"><a id="sidebartoggle" href="#block-views-wishlist-flag-block">&gt; Wishlist</a></div>');
    $(".front #sidebartoggle").replaceWith('<a id="sidebartoggle" href="#sidebar">> View Specials</a>');


$("nav.main-navigation").clone().attr('id', 'menu-clone' ).addClass("hidden-xs").insertBefore("nav.main-navigation");
    $('.menu-wrap').prepend('<div class="mobile-bar"><a id="navtoggle" class="menu-trigger" href="#openmenu"><i class="fa fa-bars"></i></a></div>');

$(".file a").attr("target","_blank");

		// JS Respond Breakpoints
		var jRes = jRespond([{
		    label: 'small',
		    enter: 0,
		    exit: 979
		},{
		    label: 'large',
		    enter: 980,
		    exit: 10000
		}]);
		
		
		jRes.addFunc({
		    breakpoint: 'small',
		    enter: function() {
			    
	 	      $('ul.nice-menu ul').css('display', '');
					$('ul.nice-menu ul').css('visibility', '');
					$('.hidden-xs .main-menu .content').attr('id', 'openmenu');
					$('.hidden-xs .main-menu .content').mmenu();
					$(".menu-trigger").trigger("open");
	
		    },
		    exit: function() {
		    
		    }
		});
 
			$('.nice-menu.mm-list').append("<li class='even last'><a href='/user/login?current=products' title='Login'>Login</a></li><li class='even last'><a href='/cart' title='Shopping Cart'>Shopping Cart</a></li><li class='even last'><a href='/job-application' title'Job Application'>Job App</a></li>");

	});
})(jQuery);



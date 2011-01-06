/*
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.0 of the PHP license,       |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_0.txt.                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Authors: Kazusuke Sasezaki <sasezaki@gmail.com>                      |
   +----------------------------------------------------------------------+
*/

/* $ Id: $ */ 

#include "php_phpcommitters.h"

#if HAVE_PHPCOMMITTERS

/* {{{ phpcommitters_functions[] */
function_entry phpcommitters_functions[] = {
	PHP_FE(phpcommitters       , phpcommitters_arg_info)
	{ NULL, NULL, NULL }
};
/* }}} */


/* {{{ phpcommitters_module_entry
 */
zend_module_entry phpcommitters_module_entry = {
	STANDARD_MODULE_HEADER,
	"phpcommitters",
	phpcommitters_functions,
	PHP_MINIT(phpcommitters),     /* Replace with NULL if there is nothing to do at php startup   */ 
	PHP_MSHUTDOWN(phpcommitters), /* Replace with NULL if there is nothing to do at php shutdown  */
	PHP_RINIT(phpcommitters),     /* Replace with NULL if there is nothing to do at request start */
	PHP_RSHUTDOWN(phpcommitters), /* Replace with NULL if there is nothing to do at request end   */
	PHP_MINFO(phpcommitters),
	"1.0.0", 
	STANDARD_MODULE_PROPERTIES
};
/* }}} */

#ifdef COMPILE_DL_PHPCOMMITTERS
ZEND_GET_MODULE(phpcommitters)
#endif


/* {{{ PHP_MINIT_FUNCTION */
PHP_MINIT_FUNCTION(phpcommitters)
{

	/* add your stuff here */

	return SUCCESS;
}
/* }}} */


/* {{{ PHP_MSHUTDOWN_FUNCTION */
PHP_MSHUTDOWN_FUNCTION(phpcommitters)
{

	/* add your stuff here */

	return SUCCESS;
}
/* }}} */


/* {{{ PHP_RINIT_FUNCTION */
PHP_RINIT_FUNCTION(phpcommitters)
{
	/* add your stuff here */

	return SUCCESS;
}
/* }}} */


/* {{{ PHP_RSHUTDOWN_FUNCTION */
PHP_RSHUTDOWN_FUNCTION(phpcommitters)
{
	/* add your stuff here */

	return SUCCESS;
}
/* }}} */


/* {{{ PHP_MINFO_FUNCTION */
PHP_MINFO_FUNCTION(phpcommitters)
{
	php_info_print_box_start(0);
	php_printf("<p>show php committers</p>\n");
	php_printf("<p>Version 0.0.1alpha (2010-01-07)</p>\n");
	php_printf("<p><b>Authors:</b></p>\n");
	php_printf("<p>Kazusuke Sasezaki &lt;sasezaki@gmail.com&gt; (lead)</p>\n");
	php_info_print_box_end();
	/* add your stuff here */

}
/* }}} */


/* {{{ proto void phpcommitters()
  show php committers */
PHP_FUNCTION(phpcommitters)
{

	if (ZEND_NUM_ARGS()>0)  {
		WRONG_PARAM_COUNT;
	}

    if (!sapi_module.phpinfo_as_text) {
        php_printf("<h1>PHP Committers</h1>\n");
    } else {
        php_printf("PHP Committers\n");
    }

    RETURN_TRUE; /** phpcredits() return TRUE*/
}
/* }}} phpcommitters */

#endif /* HAVE_PHPCOMMITTERS */


/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */

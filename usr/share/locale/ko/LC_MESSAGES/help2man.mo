ή    1      €  C   ,      8     9     ?     [  !   t          ―     Θ  &   ε            Ό      Κ   έ  ²   ¨  	   [     e     q     }                    ‘     §     ­  "   »  Ά   ή               ’  Α   ͺ     l	  μ   ν	     Ϊ
  1   ι
          $     -  Ϊ   M  B   (  1   k       5   Ά     μ     ς        ή    )   λ            δ              $   ,  4   Q  #     )   ͺ     Τ  ,   ξ       	   "  »   ,  Ν   θ  ½   Ά  	   t     ~                         ‘     ¨     ―     Ά  -   Δ  Β   ς     ΅     Ό     Γ  ¨   Κ     s    ψ     ώ  1        >     L     S  Υ   q  [   G     £     Β  g   Ϋ  	   C     M     ^  Τ  j  9   ?#     y#     #                       	   '                                             0   *   1   ,          
      %      $   "         #                                   /                   )   &                   !   +           -   (            .    %B %Y %s \- manual page for %s %s %s: can't create %s (%s) %s: can't get `%s' info from %s%s %s: can't open `%s' (%s) %s: can't unlink %s (%s) %s: error writing to %s (%s) %s: no valid information found in `%s' AUTHOR AVAILABILITY Additional material may be included in the generated output with the
.B \-\-include
and
.B \-\-opt\-include
options.  The format is simple:

    [section]
    text

    /pattern/
    text
 Any
.B [NAME]
or
.B [SYNOPSIS]
sections appearing in the include file will replace what would have
automatically been produced (although you can still override the
former with
.B \-\-name
if required).
 Blocks of verbatim *roff text are inserted into the output either at
the start of the given
.BI [ section ]
(case insensitive), or after a paragraph matching
.BI / pattern /\fR.
 COPYRIGHT DESCRIPTION ENVIRONMENT EXAMPLES Environment Examples FILES Files Games INCLUDE FILES Include file for help2man man page Lines before the first section or pattern which begin with `\-' are
processed as options.  Anything else is silently ignored and may be
used for comments, RCS keywords and the like.
 NAME OPTIONS Options Other sections are prepended to the automatically produced output for
the standard sections given above, or included at
.I other
(above) in the order they were encountered in the include file.
 Patterns use the Perl regular expression syntax and may be followed by
the
.IR i ,
.I s
or
.I m
modifiers (see
.BR perlre (1)).
 Placement of the text within the section may be explicitly requested by using
the syntax
.RI [< section ],
.RI [= section ]
or
.RI [> section ]
to place the additional text before, in place of, or after the default
output respectively.
 REPORTING BUGS Report +(?:[\w-]+ +)?bugs|Email +bug +reports +to SEE ALSO SYNOPSIS System Administration Utilities The full documentation for
.B %s
is maintained as a Texinfo manual.  If the
.B info
and
.B %s
programs are properly installed at your site, the command
.IP
.B info %s
.PP
should give you access to the complete manual.
 The latest version of this distribution is available on-line from: The section output order (for those included) is: This +is +free +software Try `--no-discard-stderr' if option outputs to stderr Usage User Commands Written +by `%s' generates a man page out of `--help' and `--version' output.

Usage: %s [OPTION]... EXECUTABLE

 -n, --name=STRING       description for the NAME paragraph
 -s, --section=SECTION   section number for manual page (1, 6, 8)
 -m, --manual=TEXT       name of manual (User Commands, ...)
 -S, --source=TEXT       source of program (FSF, Debian, ...)
 -L, --locale=STRING     select locale (default "C")
 -i, --include=FILE      include material from `FILE'
 -I, --opt-include=FILE  include material from `FILE' if it exists
 -o, --output=FILE       send output to `FILE'
 -p, --info-page=TEXT    name of Texinfo manual
 -N, --no-info           suppress pointer to Texinfo manual
 -l, --libtool           exclude the `lt-' from the program name
     --help              print this help, then exit
     --version           print version number, then exit

EXECUTABLE should accept `--help' and `--version' options and produce output on
stdout although alternatives may be specified using:

 -h, --help-option=STRING     help option string
 -v, --version-option=STRING  version option string
 --version-string=STRING      version string
 --no-discard-stderr          include stderr when parsing option output

Report bugs to <bug-help2man@gnu.org>.
 help2man \- generate a simple manual page or other Project-Id-Version: help2man 1.47.17
Report-Msgid-Bugs-To: Brendan O'Dea <bug-help2man@gnu.org>
PO-Revision-Date: 2022-12-09 02:48+0900
Last-Translator: Seong-ho Cho <darkcircle.0426@gmail.com>
Language-Team: Korean <translation-team-ko@googlegroups.com>
Language: ko
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
X-Bugs: Report translation errors to the Language-Team address.
X-Generator: Poedit 2.3.1
Plural-Forms: nplurals=1; plural=0;
 %Yλ %B %s \- %s %s μ€λͺμ νμ΄μ§ %s: %sμ(λ₯Ό) λ§λ€ μ μμ(%s) %s: `%s' μ λ³΄λ₯Ό %s%s(μ)μ κ°μ Έμ¬ μ μμ %s: `%s'μ(λ₯Ό) μ΄ μ μμ(%s) %s: %s λ§ν¬λ₯Ό ν΄μ ν  μ μμ(%s) %s: %s κΈ°λ‘ μ€λ₯ (%s) %s: `%s'μ μ μ ν μ λ³΄κ° μμ΅λλ€ μ μ κ°μ©μ± μΆκ° λ΄μ©μ
.B \-\-include
κ³Ό
.B \-\-opt\-include
μ΅μμΌλ‘ λ§λ  μΆλ ₯ λ΄μ©μ λ€μ΄κ°λλ€. νμμ κ°λ¨ν©λλ€:

    [μΉμ]
    λ΄μ©

    /ν¨ν΄/
    λ΄μ©
 νμΌμ λ€μ΄κ° μμμ
.B [μ΄λ¦]
λλ
.B [μμ½]
μΉμμ μλμΌλ‘ λ§λ  λ΄μ©μΌλ‘ (λΉλ‘ νμν κ²½μ°
.B \-\-name
μΌλ‘ μ΅μ μ°μ  μ μ©μ ν  μ μμ§λ§) λ°λλλ€.
 *roff νμ€νΈ λΈλ‘μ μ£Όμ΄μ§
.BI [ μΉμ ]
(λμλ¬Έμ λ¬΄κ΄)μΌλ‘ μμνκ±°λ, λλ
.BI / ν¨ν΄ /\fR
κ³Ό μΌμΉνλ λ¬Έλ¨ λ€μμ μλ κ·Έλλ‘ λ€μ΄κ°λλ€.
 μ μκΆ μ€λͺ νκ²½ νμ  νκ²½ μμ  νμΌ νμΌ κ²μ νμΌ ν¬ν¨ help2man μ€λͺμ νμ΄μ§μ νμΌ λ£κΈ° μ²μ μΉμμ΄μ  νμ΄λ '\-'μΌλ‘ μμνλ ν¨ν΄μ μ΅μμΌλ‘ μ²λ¦¬ν©λλ€.
κ·Έ λ°μ λ΄μ©μ μ‘°μ©ν λ¬΄μνλ©° μ£Όμ, RCS ν€μλ λ±μ μ©λλ‘ μ¬μ©ν©λλ€.
 μ΄λ¦ μ΅μ μ΅μ λ€λ₯Έ μΉμμ μμ μ μν νμ€ μΉμμ μλμΌλ‘ λ§λ  μΆλ ₯ λ€μμ λΆκ±°λ
.I κΈ°ν
(μμ) λ£μ΄ ν¬ν¨ νμΌμ λ΄μ©μ λ°μν©λλ€.
 ν¨ν΄μ ν μ κ· ννμ λ¬Έλ²μ νμ©νλ©°, 
.IR i ,
.I s
λλ
.I m
μμ μ (
.BR perlre(1) μ°Έκ³ )λ₯Ό λ°λ¦λλ€.
 μΉμμ λ€μ΄κ° λ΄μ©μ μμΉλ λ¬Έλ²μ νμ©νμ¬ λΆλͺνκ² μμ²­ν  μ μμ΅λλ€.
.RI [< μΉμ ],
.RI [= μΉμ ]
λλ
.RI [> μΉμ ]
μΌλ‘ μΆκ° λ΄μ© μ΄μ  λλ κΈ°λ³Έ λμμ²λΌ κ·Έ λ€μμ κ°κ° λ£μ μ μμ΅λλ€.
 λ²κ·Έ λ³΄κ³  Report +(?:[\w-]+ +)?bugs|Email +bug +reports +to μΆκ° μ°Έμ‘° μμ½ μμ€ν κ΄λ¦¬ μ νΈλ¦¬ν° .B %s
μ μ μ²΄ λ¬Έμλ Texinfo μ€λͺμλ‘ κ΄λ¦¬ν©λλ€. 
.B info
μ
.B %s
νλ‘κ·Έλ¨μ μ λλ‘ μ€μΉνλ€λ©΄,
.IP
.B info %s
.PP
λͺλ ΉμΌλ‘ μμ ν μ€λͺμλ₯Ό λμΈ μ μμ΄μΌν©λλ€.
 μ΄ λ°°ν¬λ³Έμ μ΅μ  λ²μ μ λ€μ μ¨λΌμΈ μμΉμμ μ΄ν΄λ³Ό μ μμ΅λλ€: μΉμ μΆλ ₯ (ν¬ν¨) μμ: This +is +free +software μ΅μ μΆλ ₯μ νμ€ μΆλ ₯μΌλ‘ λ΄λ³΄λ΄λ €λ©΄ `--no-discard-stderr' μ΅μμ μ¬μ©νμ­μμ€ μ¬μ©λ² μ¬μ©μ λͺλ Ή Written +by `%s'μ(λ) `--help'μ μ€λͺμ νμ΄μ§ μΆλ ₯κ³Ό `--version' μΆλ ₯μ λ§λ­λλ€.

μ¬μ©λ²: %s [<μ΅μ>]... <μ€ννμΌ>

 -n, --name=<λ¬Έμμ΄>         μ΄λ¦ λ¬Έλ¨ μ€λͺ
 -s, --section=<μΉμ>        μ€λͺμ νμ΄μ§ μΉμ λ²νΈ
 -m, --manual=<νμ€νΈ>       μ€λͺμ μ΄λ¦ (μ¬μ©μ λͺλ Ή, ...)
 -S, --source=<νμ€νΈ>       νλ‘κ·Έλ¨ κ³΅κΈμ (FSF, λ°λΉμ, ...)
 -L, --locale=<λ¬Έμμ΄>       λ‘μΊ μ ν (κΈ°λ³Έ: "C")
 -i, --include=<νμΌ>        `<νμΌ>' λ΄μ© ν¬ν¨
 -I, --opt-include=<νμΌ>    `<νμΌ>'μ΄ μλ€λ©΄ λ΄μ© ν¬ν¨
 -o, --output=<νμΌ>         `<νμΌ>'λ‘ μΆλ ₯ λ³΄λ΄κΈ°
 -p, --info-page=<νμ€νΈ>    Texinfo μ€λͺμ μ΄λ¦
 -N, --no-info               Texinfo μ€λͺμ ν¬μΈν° μμ κΈ°
 -l, --libtool               νλ‘κ·Έλ¨ μ΄λ¦μμ `lt-' μ μΈ
     --help                  μ΄ λμλ§μ μΆλ ₯νκ³  λκ°λλ€
     --version               λ²μ  λ²νΈλ₯Ό μΆλ ₯νκ³  λκ°λλ€

<μ€ννμΌ> μ `--help' μ΅μκ³Ό `--version' μ΅μμ λ°μλ€μ¬μΌ νλ©°
λ€μ μμμ λμ  μ§μ νλ€ νλλΌλ νμ€ μΆλ ₯μΌλ‘ κ²°κ³Όλ₯Ό λ΄λ³΄λ΄μΌν©λλ€:

 -h, --help-option=<λ¬Έμμ΄>     λμλ§ μ΅μ λ¬Έμμ΄
 -v, --version-option=<λ¬Έμμ΄>  λ²μ  μ΅μ λ¬Έμμ΄
 --version-string=<λ¬Έμμ΄>      λ²μ  λ¬Έμμ΄
 --no-discard-stderr            μ΅μ μΆλ ₯μ ν΄μν  λ νμ€ μΆλ ₯λ ν¬ν¨

<bug-help2man@gnu.org>μ λ²κ·Έλ₯Ό μλ €μ£Όμ­μμ€.
 help2man \- κ°λ¨ν μ€λͺμ νμ΄μ§λ₯Ό λ§λ­λλ€ λλ κΈ°ν 
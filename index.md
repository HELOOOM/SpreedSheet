<html>

  <head>
  <meta charset="UTF-8">
  <meta http-equiv="content-language" content="en">
  <meta http-equiv="content-type" content="text/html; charset=UTF-8">
  <meta name="viewport" content="width=device-width initial-scale=1.0">
  <meta http-equiv="X-UA-Compatible" content="IE=edge">

  <title>CS311 | Application Using Main Window</title>
  <meta name="description" content="10-703 - Deep Reinforcement Learning and Control - Carnegie Mellon University - Fall 2021
">

  <link rel="shortcut icon" href="/CS311/assets/img/favicon.ico">

  <link rel="stylesheet" href="/CS311/assets/css/main.css">
  <link rel="canonical" href="/CS311/spreadsheet/">

  
  <!-- Load Latex JS -->
  <script src="https://cdn.jsdelivr.net/npm/latex.js@0.11.1/dist/latex.min.js"></script>
  <script src="https://cdn.jsdelivr.net/npm/latex.js@0.11.1/dist/latex.component.js"></script>
  
</head>


  <body>

    <header class="site-header">

  <div class="wrapper">

    <span class="site-title">
      <a class="page-link" href="https://anassbelcaid.github.io/CS311/">CS311</a>
    </span>

    <nav class="site-nav">
      <input type="checkbox" id="nav-trigger" class="nav-trigger" />
        <label for="nav-trigger">
          <span class="menu-icon">
            <svg viewBox="0 0 18 15" width="18px" height="15px">
              <path fill="#424242" d="M18,1.484c0,0.82-0.665,1.484-1.484,1.484H1.484C0.665,2.969,0,2.304,0,1.484l0,0C0,0.665,0.665,0,1.484,0 h15.031C17.335,0,18,0.665,18,1.484L18,1.484z"/>
              <path fill="#424242" d="M18,7.516C18,8.335,17.335,9,16.516,9H1.484C0.665,9,0,8.335,0,7.516l0,0c0-0.82,0.665-1.484,1.484-1.484 h15.031C17.335,6.031,18,6.696,18,7.516L18,7.516z"/>
              <path fill="#424242" d="M18,13.516C18,14.335,17.335,15,16.516,15H1.484C0.665,15,0,14.335,0,13.516l0,0 c0-0.82,0.665-1.484,1.484-1.484h15.031C17.335,12.031,18,12.696,18,13.516L18,13.516z"/>
            </svg>
          </span>
        </label>

      <div class="trigger">
        <a class="page-link" href="/CS311/logistics/">Logistics</a>
        <a class="page-link" href="/CS311/lectures/">Lectures</a>
        <a class="page-link" href="/CS311/calendar/">Calendar</a>
        <a class="page-link" href="/CS311/homework/">Homework</a>
      </div>
    </nav>

  </div>

</header>



    <div class="page-content">
      <div class="wrapper">
        <div class="post">

  <header class="post-header">
    <h1 class="post-title">Application Using Main Window</h1>
    <h2 class="post-description">Create a MainWindow based application using the designer.</h2>
  </header>

  <article class="post-content Application Using Main Window clearfix">
    <ul id="markdown-toc">
  <li><a href="#spreadsheet-functionality" id="markdown-toc-spreadsheet-functionality">SpreadSheet (Functionality)</a>    <ul>
      <li><a href="#context" id="markdown-toc-context">Context</a>        <ul>
          <li><a href="#remarks" id="markdown-toc-remarks">Remarks</a></li>
        </ul>
      </li>
      <li><a href="#go-cell" id="markdown-toc-go-cell">Go Cell</a></li>
      <li><a href="#find-dialog" id="markdown-toc-find-dialog">Find Dialog</a></li>
      <li><a href="#saving-and-loading-files" id="markdown-toc-saving-and-loading-files">Saving and loading files</a>        <ul>
          <li><a href="#saving-content" id="markdown-toc-saving-content">Saving Content</a></li>
          <li><a href="#save-file-action" id="markdown-toc-save-file-action">Save File action</a></li>
          <li><a href="#load-file" id="markdown-toc-load-file">Load File</a></li>
        </ul>
      </li>
    </ul>
  </li>
  <li><a href="#text-editor" id="markdown-toc-text-editor">Text Editor</a>    <ul>
      <li><a href="#creating-the-project" id="markdown-toc-creating-the-project">Creating the project.</a></li>
      <li><a href="#icons" id="markdown-toc-icons">Icons</a></li>
      <li><a href="#menus" id="markdown-toc-menus">Menus</a></li>
      <li><a href="#actions" id="markdown-toc-actions">Actions</a></li>
      <li><a href="#functionality" id="markdown-toc-functionality">Functionality</a></li>
    </ul>
  </li>
</ul>

<h2 id="spreadsheet-functionality">SpreadSheet (Functionality)</h2>

<h3 id="context">Context</h3>

<p>In the lecture on <strong>QMainWindow</strong>, we wrote the code for the graphical and set
of actions for our main SpreadSeet application. Now we will focus on writing a
set of basic functionality.</p>

<p>For the full Fonctionality, you’ll need a deep understanding on inheritance
and</p>
<ul>
  <li><a href="https://doc.qt.io/qt-5.15/qtablewidgetselectionrange.html">QTableSelectedRange</a></li>
  <li>Sorting using keys.</li>
  <li>Introducing a formula for each Cell ( you must use Inheritance to
   specialize a QTalbeWidget).</li>
</ul>

<blockquote>
  <p>Those concepts are out of the scope of this course and will much of a lost of
time. But for  the curious programmer, they could try to achieve the full
functionality.</p>
</blockquote>

<p>In the our last iteration of the SpreadSheet we did obtain an application with:</p>

<ul>
  <li>Menu Bar</li>
  <li>Two tools bars</li>
  <li>Status bar to print the informations</li>
</ul>

<p>You should have an application that looks like that :</p>

<div class="centger">
  <img src="https://anassbelcaid.github.io/CS311/homeworks/07_spreadsheet/starter_image.png" />
  <div class="figcaption">
  Starter Application with actions and menus.
  </div>
</div>

<blockquote>
  <p>If you missed or have a problem with the previous week, Here is the link for
the application (Preferably you should work with your own version to have a
feeling of completion!).</p>
</blockquote>

<p>Here is the <a href="https://anassbelcaid.github.io/CS311/homeworks/07_spreadsheet/SpreadSheet_01.zip">
Starter_code.zip</a></p>

<h4 id="remarks">Remarks</h4>

<p>We did add the following modifications:</p>

<ol>
  <li>The <code class="language-plaintext highlighter-rouge">updateStatusBar</code> now takes two ints in order to syncrhonize 
with the selected item from the spreadsheet.
    <div class="language-cpp highlighter-rouge"><div class="highlight"><pre class="highlight"><code><span class="kt">void</span> <span class="n">updateStatusBar</span><span class="p">(</span><span class="kt">int</span><span class="p">,</span> <span class="kt">int</span><span class="p">)</span> 
</code></pre></div>    </div>
  </li>
</ol>

<p>Here is the <strong>implementation</strong> of this function:</p>

<div class="language-cpp highlighter-rouge"><div class="highlight"><pre class="highlight"><code><span class="kt">void</span> <span class="n">SpreadSheet</span><span class="o">::</span><span class="n">updateStatusBar</span><span class="p">(</span><span class="kt">int</span> <span class="n">row</span><span class="p">,</span> <span class="kt">int</span> <span class="n">col</span><span class="p">)</span>
<span class="p">{</span>
    <span class="n">QString</span> <span class="n">cell</span><span class="p">{</span><span class="s">"(%0, %1)"</span><span class="p">};</span>
   <span class="n">cellLocation</span><span class="o">-&gt;</span><span class="n">setText</span><span class="p">(</span><span class="n">cell</span><span class="p">.</span><span class="n">arg</span><span class="p">(</span><span class="n">row</span><span class="o">+</span><span class="mi">1</span><span class="p">).</span><span class="n">arg</span><span class="p">(</span><span class="n">col</span><span class="o">+</span><span class="mi">1</span><span class="p">));</span>

<span class="p">}</span>
</code></pre></div></div>

<p>Which simply change the <strong>cellLocation</strong> text with the current cell
coordinates.</p>

<ol>
  <li>
    <p>We added the <code class="language-plaintext highlighter-rouge">makeConnexion()</code> function to connect all the actions. Here
is the content of the this function:</p>

    <div class="language-cpp highlighter-rouge"><div class="highlight"><pre class="highlight"><code><span class="kt">void</span> <span class="n">SpreadSheet</span><span class="o">::</span><span class="n">makeConnexions</span><span class="p">()</span>
<span class="p">{</span>

<span class="c1">// --------- Connexion for the  select all action ----/</span>
<span class="n">connect</span><span class="p">(</span><span class="n">all</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">QAction</span><span class="o">::</span><span class="n">triggered</span><span class="p">,</span>
        <span class="n">spreadsheet</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">QTableWidget</span><span class="o">::</span><span class="n">selectAll</span><span class="p">);</span>

<span class="c1">// Connection for the  show grid</span>
<span class="n">connect</span><span class="p">(</span><span class="n">showGrid</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">QAction</span><span class="o">::</span><span class="n">triggered</span><span class="p">,</span>
        <span class="n">spreadsheet</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">QTableWidget</span><span class="o">::</span><span class="n">setShowGrid</span><span class="p">);</span>

<span class="c1">//Connection for the exit button</span>
<span class="n">connect</span><span class="p">(</span><span class="n">exit</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">QAction</span><span class="o">::</span><span class="n">triggered</span><span class="p">,</span> <span class="k">this</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">SpreadSheet</span><span class="o">::</span><span class="n">close</span><span class="p">);</span>

<span class="c1">//connectting the chane of any element in the spreadsheet with the update status bar</span>
<span class="n">connect</span><span class="p">(</span><span class="n">spreadsheet</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">QTableWidget</span><span class="o">::</span><span class="n">cellClicked</span><span class="p">,</span> <span class="k">this</span><span class="p">,</span>  <span class="o">&amp;</span><span class="n">SpreadSheet</span><span class="o">::</span><span class="n">updateStatusBar</span><span class="p">);</span>
<span class="p">}</span>
</code></pre></div>    </div>
  </li>
</ol>

<h3 id="go-cell">Go Cell</h3>

<p>Now we will add the function for the <strong>goCell</strong> action. For that, we need to
create a <strong>Dialog</strong> for the user to select a cell.</p>

<blockquote>
  <p>We did already achieved that in <a href="https://anassbelcaid.github.io/CS311/designer/#godialog"> Go Dialog </a>.</p>
</blockquote>

<p>If you lost that project, here are the steps to acomplish that:</p>

<ol>
  <li>
    <p>Create a <strong>Form Class</strong>:</p>
  </li>
  <li>
    <p>Using the designer obtain the following the form:</p>

    <div class="center">
   <img src=" https://anassbelcaid.github.io/CS311/homeworks/07_spreadsheet/godidalog_ui.png" />
   <div class="figcaption">
    Ui components of the Go Dialog.
   </div>
 </div>
  </li>
  <li>
    <p>Add the <strong>regular expression</strong> validator for the <code class="language-plaintext highlighter-rouge">lineEdit</code>:</p>

    <div class="language-cpp highlighter-rouge"><div class="highlight"><pre class="highlight"><code> <span class="c1">//Validating the regular expression</span>
 <span class="n">QRegExp</span> <span class="n">regCell</span><span class="p">{</span><span class="s">"[A-Z][1-9][0-9]{0,2}"</span><span class="p">};</span>

 <span class="c1">//Validating the regular expression</span>
 <span class="n">ui</span><span class="o">-&gt;</span><span class="n">lineEdit</span><span class="o">-&gt;</span><span class="n">setValidator</span><span class="p">(</span><span class="k">new</span> <span class="nf">QRegExpValidator</span><span class="p">(</span><span class="n">regCell</span><span class="p">));</span>

</code></pre></div>    </div>
  </li>
  <li>
    <p>Add a public <strong>Getter</strong> for the line edit Text to get the cell address:</p>

    <div class="language-cpp highlighter-rouge"><div class="highlight"><pre class="highlight"><code>     <span class="n">QString</span> <span class="n">GoCellDialog</span><span class="o">::</span><span class="n">cell</span><span class="p">()</span> <span class="k">const</span>
     <span class="p">{</span>
         <span class="k">return</span> <span class="n">ui</span><span class="o">-&gt;</span><span class="n">lineEdit</span><span class="o">-&gt;</span><span class="n">text</span><span class="p">();</span>
     <span class="p">}</span>
</code></pre></div>    </div>
  </li>
</ol>

<p>No we are setup to create the <strong>interesting</strong> connexion between the <strong>goCell</strong>
action:</p>

<ol>
  <li>
    <p>First we will create the proper slot called <code class="language-plaintext highlighter-rouge">goCellSlot</code> to respond to the
action <strong>trigger</strong>.</p>

    <div class="language-cpp highlighter-rouge"><div class="highlight"><pre class="highlight"><code> <span class="k">private</span> <span class="n">slots</span><span class="o">:</span>
 <span class="kt">void</span> <span class="nf">goCellSlot</span><span class="p">();</span>            <span class="c1">// Go to a Cell slot</span>
</code></pre></div>    </div>
  </li>
  <li>connect the action to its proper slot in the <code class="language-plaintext highlighter-rouge">makeConnexions</code> function:
    <div class="language-cpp highlighter-rouge"><div class="highlight"><pre class="highlight"><code><span class="c1">//Connextion between the gocell action and the gocell slot</span>
<span class="n">connect</span><span class="p">(</span><span class="n">goCell</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">QAction</span><span class="o">::</span><span class="n">triggered</span><span class="p">,</span> <span class="k">this</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">SpreadSheet</span><span class="o">::</span><span class="n">goCellSlot</span><span class="p">);</span>

</code></pre></div>    </div>
  </li>
  <li>
    <p>Now for the fun part. We will implement the <code class="language-plaintext highlighter-rouge">goCellSlot()</code> function:</p>

    <div class="language-cpp highlighter-rouge"><div class="highlight"><pre class="highlight"><code> <span class="kt">void</span> <span class="n">SpreadSheet</span><span class="o">::</span><span class="n">goCellSlot</span><span class="p">()</span>
 <span class="p">{</span>
     <span class="c1">//Creating the dialog</span>
     <span class="n">GoCellDialog</span> <span class="n">D</span><span class="p">;</span>

     <span class="c1">//Executing the dialog and storing the user response</span>
     <span class="k">auto</span> <span class="n">reply</span> <span class="o">=</span> <span class="n">D</span><span class="p">.</span><span class="n">exec</span><span class="p">();</span>

     <span class="c1">//Checking if the dialog is accepted</span>
     <span class="k">if</span><span class="p">(</span><span class="n">reply</span> <span class="o">==</span> <span class="n">GoCellDialog</span><span class="o">::</span><span class="n">Accepted</span><span class="p">)</span>
     <span class="p">{</span>

         <span class="c1">//Getting the cell text</span>
         <span class="k">auto</span> <span class="n">cell</span> <span class="o">=</span> <span class="n">D</span><span class="p">.</span><span class="n">cell</span><span class="p">();</span>

         <span class="c1">//letter distance</span>
         <span class="kt">int</span> <span class="n">row</span> <span class="o">=</span> <span class="n">cell</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">toLatin1</span><span class="p">()</span> <span class="o">-</span> <span class="sc">'A'</span><span class="p">;</span>
         <span class="n">cell</span><span class="p">.</span><span class="n">remove</span><span class="p">(</span><span class="mi">0</span><span class="p">,</span><span class="mi">1</span><span class="p">);</span>

         <span class="c1">//second coordinate</span>
         <span class="kt">int</span> <span class="n">col</span> <span class="o">=</span>  <span class="n">cell</span><span class="p">.</span><span class="n">toInt</span><span class="p">();</span>


         <span class="c1">//changing the current cell</span>
         <span class="n">spreadsheet</span><span class="o">-&gt;</span><span class="n">setCurrentCell</span><span class="p">(</span><span class="n">row</span><span class="p">,</span> <span class="n">col</span><span class="o">-</span><span class="mi">1</span><span class="p">);</span>
     <span class="p">}</span>
 <span class="p">}</span>
</code></pre></div>    </div>
  </li>
</ol>
<div class="left">
  <img src=" https://anassbelcaid.github.io/CS311/homeworks/07_spreadsheet/go_cell_query.png	" />
</div>
<div class="center">
  <img src="https://anassbelcaid.github.io/CS311/homeworks/07_spreadsheet/go_cell_response.png" width="400" />
  <div class="figcaption">
  Go to Cell dialog and response.
  </div>
</div>

<h3 id="find-dialog">Find Dialog</h3>

<p>We will move now for the <strong>Find</strong> dialog. This dialog prompts the user for a
input and seek a cell that contains the entered text.</p>

<ol>
  <li>Create a <strong>Form Class</strong> with the following <em>ui</em>:</li>
</ol>

<div class="center">
  <img src="https://anassbelcaid.github.io/CS311/homeworks/07_spreadsheet/find_dialog_ui.png" />
  <div class="figcaption">
  Find Dialog ui form.
  </div>
</div>

<ol>
  <li>Add a <strong>Getter</strong> to obtain the searched text.</li>
  <li>Implements the connexion between the <strong>dialog</strong> and the <strong>find</strong> function:</li>
</ol>

<p>Here is a set of useful information about the <code class="language-plaintext highlighter-rouge">QTableWidget</code> class:</p>

<ul>
  <li>The method <code class="language-plaintext highlighter-rouge">rowCount()</code> gives the number of rows.</li>
  <li>The method <code class="language-plaintext highlighter-rouge">columnCount()</code> gives the number of columns in the spreadsheet.</li>
  <li>The Method <code class="language-plaintext highlighter-rouge">item(int i, int j)</code> return a pointer on the cell indexed by i and
j.</li>
  <li>
    <p>If this pointer is not null, you could get its content by the method <code class="language-plaintext highlighter-rouge">text()</code>
which returns a <code class="language-plaintext highlighter-rouge">QString</code>.</p>
  </li>
  <li>Finally, the method to change the  <strong>focused</strong> cell is
    <div class="language-cpp highlighter-rouge"><div class="highlight"><pre class="highlight"><code>  <span class="n">spreadsheet</span><span class="o">-&gt;</span><span class="n">setCurrentCell</span><span class="p">(</span><span class="kt">int</span> <span class="n">i</span><span class="p">,</span> <span class="kt">int</span> <span class="n">j</span><span class="p">);</span>
</code></pre></div>    </div>
  </li>
</ul>

<div class="left">
  <img src="https://anassbelcaid.github.io/CS311/homeworks/07_spreadsheet/find_cell_query.png" width="400" />
</div>
<div class="center">
  <img src="https://anassbelcaid.github.io/CS311/homeworks/07_spreadsheet/find_cell_response.png" width="440" />
  <div class="figcaption">
  Find dialog illustration
  </div>
</div>

<h3 id="saving-and-loading-files">Saving and loading files</h3>

<p>For our final task, we will learn how to save the content of our spreadsheet in
a simple format. Since a spreadsheet is not forcefully <strong>tabular</strong>, it will be a
waste to save all the <strong>empty</strong> data. Hence, we will choose a simple format that
store the <strong>coordinates</strong> and the <strong>content</strong> of the non empty cells.</p>

<div class="language-plaintext highlighter-rouge"><div class="highlight"><pre class="highlight"><code>i1, j1, content1
i2, j2, content2
.
.
.
</code></pre></div></div>

<h4 id="saving-content">Saving Content</h4>

<p>We will start by writing a <strong>private</strong> function <code class="language-plaintext highlighter-rouge">saveContent(QSTring filename)</code> to  save the content of our spreadsheet in a text file.</p>

<ol>
  <li>
    <p>We will add the declaration in the   <code class="language-plaintext highlighter-rouge">header</code> file:</p>

    <div class="language-cpp highlighter-rouge"><div class="highlight"><pre class="highlight"><code> <span class="nl">protected:</span>
     <span class="kt">void</span> <span class="n">saveContent</span><span class="p">(</span><span class="n">QString</span> <span class="n">filename</span><span class="p">)</span><span class="k">const</span><span class="p">;</span>
</code></pre></div>    </div>
  </li>
  <li>For the implementation, we will using two classes:
    <ul>
      <li><a href="https://doc.qt.io/qt-5/qfile.html">QFile</a> which provides an interface to
 read and write in files.</li>
      <li><a href="https://doc.qt.io/qt-5/qtextstream.html">QTextStream</a> for manipulating
 objects with a stream such as a file.</li>
    </ul>
  </li>
  <li>Here is  the complete implementation of this function:
    <div class="language-cpp highlighter-rouge"><div class="highlight"><pre class="highlight"><code> <span class="kt">void</span> <span class="n">SpreadSheet</span><span class="o">::</span><span class="n">saveContent</span><span class="p">(</span><span class="n">QString</span> <span class="n">filename</span><span class="p">)</span> <span class="k">const</span>
 <span class="p">{</span>

     <span class="c1">//Gettign a pointer on the file</span>
     <span class="n">QFile</span> <span class="n">file</span><span class="p">(</span><span class="n">filename</span><span class="p">);</span>

     <span class="c1">//Openign the file</span>
     <span class="k">if</span><span class="p">(</span><span class="n">file</span><span class="p">.</span><span class="n">open</span><span class="p">(</span><span class="n">QIODevice</span><span class="o">::</span><span class="n">WriteOnly</span><span class="p">))</span>  <span class="c1">//Opening the file in writing mode</span>
     <span class="p">{</span>
         <span class="c1">//Initiating a stream using the file</span>
         <span class="n">QTextStream</span> <span class="n">out</span><span class="p">(</span><span class="o">&amp;</span><span class="n">file</span><span class="p">);</span>

         <span class="c1">//loop to save all the content</span>
         <span class="k">for</span><span class="p">(</span><span class="kt">int</span> <span class="n">i</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="n">spreadsheet</span><span class="o">-&gt;</span><span class="n">rowCount</span><span class="p">();</span><span class="n">i</span><span class="o">++</span><span class="p">)</span>
             <span class="k">for</span><span class="p">(</span><span class="kt">int</span> <span class="n">j</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span> <span class="n">j</span> <span class="o">&lt;</span> <span class="n">spreadsheet</span><span class="o">-&gt;</span><span class="n">columnCount</span><span class="p">();</span> <span class="n">j</span><span class="o">++</span><span class="p">)</span>
             <span class="p">{</span>
                 <span class="k">auto</span> <span class="n">cell</span> <span class="o">=</span> <span class="n">spreadsheet</span><span class="o">-&gt;</span><span class="n">item</span><span class="p">(</span><span class="n">i</span><span class="p">,</span> <span class="n">j</span><span class="p">);</span>

                 <span class="c1">//Cecking if the cell is non empty</span>
                 <span class="k">if</span><span class="p">(</span><span class="n">cell</span><span class="p">)</span>
                 <span class="n">out</span> <span class="o">&lt;&lt;</span> <span class="n">cell</span><span class="o">-&gt;</span><span class="n">row</span><span class="p">()</span> <span class="o">&lt;&lt;</span> <span class="s">", "</span><span class="o">&lt;&lt;</span> <span class="n">cell</span><span class="o">-&gt;</span><span class="n">column</span><span class="p">()</span> <span class="o">&lt;&lt;</span> <span class="s">", "</span> <span class="o">&lt;&lt;</span> <span class="n">cell</span><span class="o">-&gt;</span><span class="n">text</span><span class="p">()</span> <span class="o">&lt;&lt;</span> <span class="n">endl</span><span class="p">;</span>
             <span class="p">}</span>

     <span class="p">}</span>
     <span class="n">file</span><span class="p">.</span><span class="n">close</span><span class="p">();</span>
 <span class="p">}</span>
</code></pre></div>    </div>
  </li>
</ol>

<h4 id="save-file-action">Save File action</h4>

<p>Now that we have an operational <code class="language-plaintext highlighter-rouge">saveContent</code> function, we could focus on the
slot itself.</p>

<p>So first we will create a <strong>slot</strong> to respond to the action trigger in the
header.</p>

<div class="language-cpp highlighter-rouge"><div class="highlight"><pre class="highlight"><code><span class="k">private</span> <span class="n">slots</span><span class="o">:</span>
    <span class="kt">void</span> <span class="nf">saveSlot</span><span class="p">();</span>             <span class="c1">//Slot to save the content of the file</span>
</code></pre></div></div>

<p>Now we will add the connexion in the <code class="language-plaintext highlighter-rouge">makeConnexion</code> function:</p>

<div class="language-cpp highlighter-rouge"><div class="highlight"><pre class="highlight"><code>   <span class="c1">//Connexion for the saveFile</span>
   <span class="n">connect</span><span class="p">(</span><span class="n">save</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">QAction</span><span class="o">::</span><span class="n">triggered</span><span class="p">,</span> <span class="k">this</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">SpreadSheet</span><span class="o">::</span><span class="n">saveSlot</span><span class="p">);</span>
</code></pre></div></div>

<p>Finally for the interesting part, the implementation of the slot</p>

<div class="language-cpp highlighter-rouge"><div class="highlight"><pre class="highlight"><code>
<span class="kt">void</span> <span class="n">SpreadSheet</span><span class="o">::</span><span class="n">saveSlot</span><span class="p">()</span>
<span class="p">{</span>
    <span class="c1">//Creating a file dialog to choose a file graphically</span>
    <span class="k">auto</span> <span class="n">dialog</span> <span class="o">=</span> <span class="k">new</span> <span class="n">QFileDialog</span><span class="p">(</span><span class="k">this</span><span class="p">);</span>

    <span class="c1">//Check if the current file has a name or not</span>
    <span class="k">if</span><span class="p">(</span><span class="n">currentFile</span> <span class="o">==</span> <span class="s">""</span><span class="p">)</span>
    <span class="p">{</span>
       <span class="n">currentFile</span> <span class="o">=</span> <span class="n">dialog</span><span class="o">-&gt;</span><span class="n">getSaveFileName</span><span class="p">(</span><span class="k">this</span><span class="p">,</span><span class="s">"choose your file"</span><span class="p">);</span>

       <span class="c1">//Update the window title with the file name</span>
       <span class="n">setWindowTitle</span><span class="p">(</span><span class="n">currentFile</span><span class="p">);</span>
    <span class="p">}</span>

   <span class="c1">//If we have a name simply save the content</span>
   <span class="k">if</span><span class="p">(</span> <span class="n">currentFile</span> <span class="o">!=</span> <span class="s">""</span><span class="p">)</span>
   <span class="p">{</span>
           <span class="n">saveContent</span><span class="p">(</span><span class="n">currentFile</span><span class="p">);</span>
   <span class="p">}</span>
<span class="p">}</span>

</code></pre></div></div>

<h4 id="load-file">Load File</h4>

<blockquote>
  <p>Now it is your turn to write the implementation for the <strong>load file</strong> action.</p>
</blockquote>

<p>That will be all for our humble application. In your free time, try to add more
functionalities.</p>

<hr />

<h2 id="text-editor">Text Editor</h2>

<p>For your first example, we will playing the <strong>Designer</strong> for a fast application
creation. The application is from <a href="https://doc.qt.io/qt-5/qtwidgets-mainwindows-application-example.html">Qt Examples</a> and is a simple text editor program built around <a href="https://doc.qt.io/qt-5/qplaintextedit.html">QPlainText</a>.</p>

<div class="center">
  <img src=" https://anassbelcaid.github.io/CS311/homeworks/07_spreadsheet/wordEditor.png" />
  <div class="figcaption">
  Example for the main text editor.
  </div>
</div>

<p>We will mainly use the <strong>designer</strong> for a rapid design of it features. But if
you feel adventurous you can write all in using code.</p>

<p>Here is an overview of the menus:</p>

<div class="center">
  <img src="https://anassbelcaid.github.io/CS311/homeworks/07_spreadsheet/application-menus.png" />
  <div class="figcaption">
  Set of menus for our application.
  </div>
</div>

<h3 id="creating-the-project">Creating the project.</h3>

<p>First create a new project called <code class="language-plaintext highlighter-rouge">WordText</code> using the following steps:</p>

<ol>
  <li>Choose a <code class="language-plaintext highlighter-rouge">QT Widgets Application</code>.</li>
  <li>Name your project <code class="language-plaintext highlighter-rouge">WordText</code></li>
  <li>Inherit now from <strong>QMainWindow</strong>.</li>
  <li>Choose all the remaining default choices.</li>
</ol>

<p>Open the form You’ll see that it has now an empty <strong>menu</strong> and already a defined
<strong>menu</strong> and <strong>satatus</strong> bars.</p>

<div class="center">
  <img src=" https://anassbelcaid.github.io/CS311/homeworks/07_spreadsheet/empty_project.png" width="700" />
  <div class="figcaption">
  First empty QMainWindow Project.
  </div>
</div>

<h3 id="icons">Icons</h3>

<ol>
  <li>Add a <strong>resource file</strong> and add a set of predefined icons from you choice.</li>
</ol>

<h3 id="menus">Menus</h3>

<p>Using the designer add all the menues in the image description.</p>

<blockquote>
  <p>To add a menu you simply enter its name.  You can edit its properties in
the <strong>object Inspector</strong>.</p>
</blockquote>

<h3 id="actions">Actions</h3>

<p>Easy enough you can also add your actions to a menu by simply clicking the text
in the menu.</p>

<h3 id="functionality">Functionality</h3>
<p>Now using your knowledge, try to code the functionality of the <strong>Text Editor</strong>.
Here is a link for <a href="https://doc.qt.io/qt-5/qplaintextedit.html">QPlainTextEdit</a>.</p>

<blockquote>
  <p>Good luck</p>
</blockquote>

  </article>

</div>

      </div>
    </div>

    <footer class="site-footer">

  <div class="wrapper">

    <h2 class="footer-heading">C++ GUI Programming with QT</h2>

    <div class="footer-col-wrapper">
      <div class="footer-col footer-col-1">
        <ul class="contact-list">
          <li class="p-name">A.belcaid</li><li><a class="u-email" href="mailto:anass.belcaid@gmail.com">anass.belcaid@gmail.com</a></li></ul>
      </div>

      <div class="footer-col footer-col-2"><ul class="social-media-list"><li><a href="https://github.com/anassBelcaid" target="_blank"><i class="fab fa-github"></i> <span class="username">anassBelcaid</span></a></li></ul>
</div>

      <div class="footer-col footer-col-3">
        <p>&copy; Copyright 2021 Euromed University. <br />
        Powered by <a href="http://jekyllrb.com/" target="_blank">Jekyll</a> with <a href="https://github.com/alshedivat/al-folio">al-folio</a> theme.
</p>
      </div>
    </div>

  </div>

</footer>


    <!-- Load jQuery -->
<script src="//code.jquery.com/jquery-1.12.4.min.js"></script>

<!-- Load Common JS -->
<script src="/CS311/assets/js/common.js"></script>


<!-- Load KaTeX -->
<link rel="stylesheet" href="//cdnjs.cloudflare.com/ajax/libs/KaTeX/0.10.1/katex.min.css">
<script src="//cdnjs.cloudflare.com/ajax/libs/KaTeX/0.10.1/katex.min.js"></script>
<script src="/CS311/assets/js/katex.js"></script>



<!-- Load Anchor JS -->
<script src="//cdnjs.cloudflare.com/ajax/libs/anchor-js/3.2.2/anchor.min.js"></script>
<script>
  anchors.options.visible = 'hover';
  anchors.add('article h2, article h3, article h4, article h5, article h6');
</script>



<!-- Adjust LaTeX JS -->
<script src="/CS311/assets/js/latex.js"></script>


<!-- Include custom icon fonts -->
<link rel="stylesheet" href="/CS311/assets/css/fontawesome-all.min.css">
<link rel="stylesheet" href="/CS311/assets/css/academicons.min.css">

<!-- Google Analytics -->
<script>
(function(i,s,o,g,r,a,m){i['GoogleAnalyticsObject']=r;i[r]=i[r]||function(){
(i[r].q=i[r].q||[]).push(arguments)},i[r].l=1*new Date();a=s.createElement(o),
m=s.getElementsByTagName(o)[0];a.async=1;a.src=g;m.parentNode.insertBefore(a,m)
})(window,document,'script','//www.google-analytics.com/analytics.js','ga');

ga('create', '', 'auto');
ga('send', 'pageview');
</script>


  </body>

</html>


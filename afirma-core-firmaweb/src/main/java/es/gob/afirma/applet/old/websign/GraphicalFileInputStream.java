/*******************************************************************************
 * Este fichero forma parte del Cliente @firma.
 * El Cliente @firma es un aplicativo de libre distribucion cuyo codigo fuente puede ser consultado
 * y descargado desde http://forja-ctt.administracionelectronica.gob.es/
 * Copyright 2009,2010,2011 Gobierno de Espana
 * Este fichero se distribuye bajo  bajo licencia GPL version 2  segun las
 * condiciones que figuran en el fichero 'licence' que se acompana. Si se distribuyera este
 * fichero individualmente, deben incluirse aqui las condiciones expresadas alli.
 ******************************************************************************/

package es.gob.afirma.applet.old.websign;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;

/** <code>InputStream</code> con di&aacute;logo gr&aacute;fico de espera en caso
 * de operaciones que tarden mucho. */
final class GraphicalFileInputStream extends FileInputStream {
    private final ProgressWindow progressWindow;
    private final File file;

    /** Construye el <code>InputStream</code> con di&aacute;logo gr&aacute;fico
     * de espera.
     * @param file
     *        Fichero sobre el cual se abre el <code>InputStream</code>
     * @throws FileNotFoundException
     *         Si no se encuentra el fichero */
    GraphicalFileInputStream(final File file) throws FileNotFoundException {
        super(file);
        this.file = file;
        this.progressWindow = new ProgressWindow(WebSignMessages.getString("GraphicalFileInputStream.0", file.getName()), WebSignMessages.getString("GraphicalFileInputStream.1"), file.length()); //$NON-NLS-1$ //$NON-NLS-2$
        this.progressWindow.setVisible(true);
    }

    @Override
    public void close() {
        this.progressWindow.dispose();
    }

    /** Obtiene el tama&ntilde;o del fichero.
     * @return Tama&ntilde;o del fichero */
    long getFileSize() {
        return this.file.length();
    }

    @Override
    public int read() throws IOException {
        final int c = super.read();
        if (c > 0) {
            this.progressWindow.inc(1);
        }
        return c;
    }

    @Override
    public int read(final byte[] buff) throws IOException {
        final int c = super.read(buff);
        if (c > 0) {
            this.progressWindow.inc(c);
        }
        return c;
    }

    @Override
    public int read(final byte[] buff, final int off, final int len) throws IOException {
        final int c = super.read(buff, off, len);
        if (c > 0) {
            this.progressWindow.inc(c);
        }
        return c;
    }
}
